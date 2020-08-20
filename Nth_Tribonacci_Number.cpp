#include<iostream>
using namespace std;
long tribonacci_gen(int n){
  
   int first = 0, second = 1, third = 1;
   for(int i = 0; i < n - 3; i++){
      int next = first + second + third;
      first = second;
      second = third;
      third = next;
   }
   return third;
}
int main(){
	int n;
	cout <<"enter the nth term\n";
	cin >>n;
   cout << "Tribonacci Term: " << tribonacci_gen(n);
}
