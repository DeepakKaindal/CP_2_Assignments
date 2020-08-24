#include<iostream>
#include<vector>
using namespace std;
bool isSubSequence(string s1, string s2) {
   int m = s1.length(), n = s2.length();
   int j = 0;
   for (int i=0; i<n&&j<m; i++)
   if (s1[j] == s2[i])
      j++;
   return (j==m);
}
string getLongestSubstr(vector <string > dict, string s) {
   string result = "";
   int length = 0;
   for (string word : dict) {
      if (length < word.length() && isSubSequence(word, s)) {
         result = word;
         length = word.length();
      }
   }
   return result;
}
int main() {
   vector <string > dict = {"pintu", "geeksfor", "geeksgeeks", 
                                        " forgeek"};
   string str = "geeksforgeeks" ;
   cout << getLongestSubstr(dict, str) << endl;
}
