#include <bits/stdc++.h>
using namespace std;

#define INF 100000000

int mc[50][50]; // DP Array
int split[50][50]; // To store split points for printing order

int MCM(int* c, int i, int j) {
    if (i == j)
        return 0;

    if (mc[i][j] != -1)
        return mc[i][j];

    mc[i][j] = INT_MAX;

    for (int k = i; k < j; k++) {
        int cost = MCM(c, i, k) + MCM(c, k + 1, j) + c[i - 1] * c[k] * c[j];

        if (cost < mc[i][j]) {
            mc[i][j] = cost;
            split[i][j] = k; 
        }
    }

    return mc[i][j];
}

void printOrder(int i, int j) {
    if (i == j) {
        cout << "A" << i << " ";
    } else {
        cout << "(";
        printOrder(i, split[i][j]);
        printOrder(split[i][j] + 1, j);
        cout << ")";
    }
}

void printMatrix(int a[50][50], int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (a[i][j] == INF || a[i][j] == -1)
                cout << "INF\t";
            else
                cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}

int Matrix(int* c, int n) {
    int i = 1, j = n - 1;
    return MCM(c, i, j);
}

int main() {
    int arr[] = {23, 26, 27, 20};
    int n = sizeof(arr) / sizeof(arr[0]);

    memset(mc, -1, sizeof(mc));
    memset(split, -1, sizeof(split));

    int minCost = Matrix(arr, n);

    cout << "Minimum number of multiplications is: " << minCost << endl;

    cout << "\nCost Matrix (mc): " << endl;
    printMatrix(mc, n - 1);

    cout << "\nSplit Matrix (split points): " << endl;
    printMatrix(split, n - 1);

    cout << "\nOptimal Parenthesization Order: " << endl;
    printOrder(1, n - 1);
    cout << endl;

    return 0;
}
