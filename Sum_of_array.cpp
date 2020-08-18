#include <iostream>
using namespace std;
int Sum(int a[], int b[], int n, int m){
   int sum[n];
   int i = n - 1, j = m - 1, k = n - 1;
   int c = 0, s = 0;
   while (j >= 0) {
      s = a[i] + b[j] + c;
      sum[k] = (s % 10);
      c = s / 10;
      k--;
      i--;
      j--;
   }
   while (i >= 0) {
      s = a[i] + c;
      sum[k] = (s % 10);
      c = s / 10;
      i--;
      k--;
   }
   for (int i = 0; i <= n-1; i++) {
      cout<<sum[i];
   }
}
int main(){
   int a[] = { 4, 7, 8 };
   int b[] = { 7, 4 };
   int n = sizeof(a) / sizeof(a[0]);
   int m = sizeof(b) / sizeof(b[0]);
   cout<<"The sum is ";
   if (n >= m)
      Sum(a, b, n, m);
   else
      Sum(b, a, m, n);
   return 0;
}
