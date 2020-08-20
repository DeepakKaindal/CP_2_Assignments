#include<iostream>
using namespace std;

bool isMirrorInverse(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {

        if(arr[arr[i]] != i)
            cout << "Not a Mirror-Inverse";
        else
            cout << "Mirror-Inverse";
    }
}

int main()
{
        int arr[]= {1, 2, 3, 4};
        int n = sizeof(arr)/sizeof(arr[0]);
        isMirrorInverse(arr, n);
}
