#include <bits/stdc++.h>
using namespace std;

int knapSack(int W, int wt[], int val[], int n) {
    set<pair<int, int>> s;
    s.insert({0, 0});
    
    for (int i = 0; i < n; i++) {
        set<pair<int, int>> temp = s;
        for (auto p : s) {
            int w = p.first + wt[i];
            int v = p.second + val[i];
            if (w <= W)
                temp.insert({w, v});
        }
        s = temp;
    }

    int ans = 0;
    for (auto p : s)
        ans = max(ans, p.second);
    
    return ans;
}

int main() {
    int val[] = {70, 20, 50};
    int wt[] = {11, 12, 13};
    int W = 30;
    int n = sizeof(val) / sizeof(val[0]);
    cout << "Maximum Profit: " << knapSack(W, wt, val, n);
    return 0;
}
