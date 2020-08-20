#include <iostream> 
using namespace std; 
   
void MoveZeros(int arr[], int n) 
{ 
    int count = 0;  
    for (int i = 0; i < n; i++) 
        if (arr[i] != 0) 
            arr[count++] = arr[i]; 
    while (count < n) 
       arr[count++] = 0; 
} 
  
int main() 
{ 
    int arr[] = {2, 0, 4, 1, 0, 0, 9,}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    MoveZeros(arr, n); 
    cout << "New array :\n"; 
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " "; 
    return 0; 
} 
