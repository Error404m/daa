#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool ispalindrome(string str, ll l, ll r) {
    // check for first and last character iteratively
    while(l <= r) {
      if(str[l++] != str[r--]) // whenever first and last character differ, that string is non palindrome
        return false;
    }
    return true;
  }
int main(){
	//Enter a string
		string s;
		cin>>s;
        int count = 0;
        //Consider all the substrings
        for(int i = 0; i < s.size(); ++i) {
            for(int j = i; j < s.size(); ++j) {
                count += ispalindrome(s, i, j);
            }
        }
        //Print the count of the substrings
        cout<<count<<endl;
        return 0;
    
}   
    
