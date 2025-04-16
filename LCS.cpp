#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

string lcs(string X, string Y) {
    int m = X.length();
    int n = Y.length();
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

    // Step 1: Fill dp table
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (X[i - 1] == Y[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1];
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    int i = m, j = n;
    string lcsStr = "";

    while (i > 0 && j > 0) {
        if (X[i - 1] == Y[j - 1]) {
            lcsStr += X[i - 1];  
            i--;
            j--;
        } else if (dp[i - 1][j] > dp[i][j - 1]) {
            i--;  
        } else {
            j--;  
        }
    }

    reverse(lcsStr.begin(), lcsStr.end());  
    return lcsStr;
}

int main() {
    string X = "AGGTAB";
    string Y = "GXTXAYB";

    string result = lcs(X, Y);
    cout << "LCS string is: " << result << endl;
    return 0;
}
