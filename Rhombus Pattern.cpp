#include <bits/stdc++.h> 
using namespace std; 
  
void Rhombus(int r) //r=rows
{ 
    int i, j; 
    for (i=1; i<=r; i++) 
    {   //for spaces
        for (j=1; j<=r - i; j++) 
            cout << " "; 
          //to print stars
        for (j=1; j<=r; j++) 
            cout << "*"; 
               
        cout << "\n"; 
    } 
} 
int main() 
{ 
    int r=4;
    Rhombus(r); 
    return 0; 
} 