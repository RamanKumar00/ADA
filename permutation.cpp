#include <iostream>
#include <string>
#include <vector>
#include <chrono>

using namespace std;
using namespace std::chrono;

void permute(string str, int k, int n, vector<string>& permutations) {
    if (k == n) {
        permutations.push_back(str); // Store permutations
        return;
    }
    for (int i = k; i <= n; i++) {
        swap(str[k], str[i]);
        permute(str, k + 1, n, permutations);
        swap(str[k], str[i]); // Backtrack
    }
}

int main() {
    string input_string;
    cout << "Enter a string: ";
    cin >> input_string;  // Take user input

    vector<string> permutations;
    auto start = high_resolution_clock::now();

    permute(input_string, 0, input_string.length() - 1, permutations);

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    // Print the permutations
    cout << "\nPermutations:\n";
    for (const string& perm : permutations) {
        cout << perm << endl;
    }

    cout << "Total permutations: " << permutations.size() << endl;
    cout << "Time taken: " << duration.count() << " microseconds" << endl;

    return 0;
}
