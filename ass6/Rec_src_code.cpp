#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

// iterative function to check whether passed string is palindrome or not
bool ispalindrome(string str, ll l, ll r) {
    // check for first and last character iteratively
    while(l <= r) {
      if(str[l++] != str[r--]) // whenever first and last character differ, that string is non palindrome
        return false;
    }
    return true;
  }

// Recursive function to count no of palindromic substring
ll count_palindromes(string str, ll l, ll r)
{
    if(l > r)
        return 0;

    // string with one character is a palindrome
    if(l == r)
        return 1;

    ll cnt = 0;

    if(ispalindrome(str,l,r))
        cnt=1;

    // count all palindromes from "l+1" to "r"
    cnt = cnt + count_palindromes(str,l+1,r);

     //count all palindromes from "l" to "r-1"
    cnt = cnt + count_palindromes(str,l,r-1);

     // because of the above two recursive calls, since we have counted twice all
    // palindromes from "l+1" to "r-1", so we subtract one count
    cnt = cnt - count_palindromes(str,l+1,r-1);

    return cnt;

}

int main()
{
	cout << "Enter a string " << endl;
	string str;
	cin >> str;
    ll len = str.size();
    // storing the count of palindromes returned by the function in the result
	ll res = count_palindromes(str,0,len-1);

	cout << "\nThe total count of the number of non-empty sub strings that are palindromes is : " << endl;
	cout << res << endl;

	return 0;
}
