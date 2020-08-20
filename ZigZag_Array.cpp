#include <iostream>
using namespace std;
void convert_zigzag(int arr[], int n) {
   bool flag = true;
   for (int i=0; i<=n-2; i++) {
      if (flag)
	  {
	    
         if (arr[i] > arr[i+1])
         swap(arr[i], arr[i+1]);
   }
	   else {
         if (arr[i] < arr[i+1])
            swap(arr[i], arr[i+1]);
      }
      flag = !flag;
   }
}
int main() {
   int n;
   cout << "Enter the number of elements in array\n";
   cin >>n;
   int arr[n];
   cout <<"Enter elements in array\n";
   for(int i=0; i<n; i++){
   	cin >>arr[i];
   }
   convert_zigzag(arr, n);
   for (int i=0; i<n; i++)
      cout << arr[i] << " ";
   return 0;
}
