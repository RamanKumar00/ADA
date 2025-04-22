#include<iostream>
using namespace std;

// Check if it's safe to place a queen at position (x, y)
bool isSafe(int** arr, int x , int y , int n){
    // Check same column
    for (int row = 0; row < x; row++){
        if(arr[row][y] == 1){
            return false;
        }
    }

    // Check upper-left diagonal
    int row = x, col = y;
    while(row >= 0 && col >= 0){
        if(arr[row][col] == 1){
            return false;
        }
        row--;
        col--;
    }

    // Check upper-right diagonal
    row = x, col = y;
    while(row >= 0 && col < n){
        if(arr[row][col] == 1){
            return false;
        }
        row--;
        col++;
    }

    return true;
}

// Recursive function to solve N-Queens problem
bool nQueen(int** arr, int x, int n ){
    // All queens are placed
    if(x >= n){
        return true;
    }

    // Try placing queen in each column of the current row
    for(int col = 0; col < n; col++){
        if(isSafe(arr, x, col, n)){
            arr[x][col] = 1; // Place queen

            if(nQueen(arr, x+1, n)){
                return true;
            }

            arr[x][col] = 0; // Backtrack
        }
    }

    return false;
}

int main() {
    int n;
    cout << "Enter the size of the board (n): ";
    cin >> n;

    // Create a 2D array (n x n) filled with 0
    int** arr = new int*[n];
    for(int i = 0; i < n; i++){
        arr[i] = new int[n];
        for(int j = 0; j < n; j++){
            arr[i][j] = 0;
        }
    }

    // Call the function
    if (nQueen(arr, 0, n)) {
        // Print the board
        cout << "One valid solution:\n";
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(arr[i][j] == 1)
                    cout << "Q ";
                else
                    cout << ". ";
            }
            cout << endl;
        }
    } else {
        cout << "No solution found." << endl;
    }
    return 0;
}
