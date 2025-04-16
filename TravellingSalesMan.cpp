#include <bits/stdc++.h>
using namespace std;

int tsp(int dist[][4], int n) {
    vector<int> cities;
    for (int i = 1; i < n; i++) cities.push_back(i);

    int minPath = INT_MAX;

    do {
        int currPath = 0;
        int k = 0;

        for (int i = 0; i < cities.size(); i++) {
            currPath += dist[k][cities[i]];
            k = cities[i];
        }

        currPath += dist[k][0]; // return to starting city

        minPath = min(minPath, currPath);
    } while (next_permutation(cities.begin(), cities.end()));

    return minPath;
}

int main() {
    int dist[4][4] = {
        {0, 10, 15, 20},
        {10, 0, 35, 25},
        {15, 35, 0, 30},
        {20, 25, 30, 0}
    };

    int n = 4;
    cout << "Minimum TSP path: " << tsp(dist, n);
    return 0;
}
