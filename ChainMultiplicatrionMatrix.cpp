#include <bits/stdc++.h>
using namespace std;
int mc[50][50];
int MCM(int* c, int i, int j){
   if (i == j) {
      return 0;
   }
   if (mc[i][j] != -1) {
      return
         mc[i][j];
   }
   mc[i][j] = INT_MAX;
   for (int k = i; k < j; k++) {
      mc[i][j] = min(mc[i][j], MCM(c, i, k) + MCM(c, k + 1, j) + c[i - 1] * c[k] * c[j]);
   }
   return mc[i][j];
}
int Matrix(int* c, int n){
   int i = 1, j = n - 1;
   return MCM(c, i, j);
}
int main(){
   int arr[] = { 23, 26, 27, 20 };
   int n = sizeof(arr) / sizeof(arr[0]);
   memset(mc, -1, sizeof mc);
   cout << "Minimum number of multiplications is: " << Matrix(arr, n);
}