#include<bits/stdc++.h>
using namespace std;
int main()
{    
  int n,x;
  cout<<"Enter the number of elements"<<" ";
  cin>>n;  
  int arr[n];
  for(int i=0;i<n;i++)
  {
  	cout<<"Enter "<<i<<" element in array\n";
     cin>>arr[i];
  }
  cout<<"Enter element you want to check\n";
  cin>>x;
  int low=lower_bound(arr,arr+n,x)-arr; //index of first occurence of the element
  int high=upper_bound(arr,arr+n,x)-arr; //index of the last occurenece of element
  if(high-low>=n/2)
    cout<<x <<" is a majority element\n";
  else
    cout<<x <<" is not a majority element\n";
  return 0;
}
