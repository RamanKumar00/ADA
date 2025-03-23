#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int knapsack(int capacity, vector<int>& weights, vector<int>& values, int n) {

    vector<int> dp(capacity + 1, 0);

    
    for (int i = 0; i < n; i++) { 
        for (int w = capacity; w >= weights[i]; w--) { 
            dp[w] = max(dp[w], values[i] + dp[w - weights[i]]); 
        }
    }

   
    return dp[capacity];
}

int main() {
    vector<int> values = {60, 100, 120}; 
    vector<int> weights = {10, 20, 30};   
    int capacity = 50;                   
    int n = values.size();            

    int max_value = knapsack(capacity, weights, values, n);
    cout << "Maximum value: " << max_value << endl;

    return 0;
}