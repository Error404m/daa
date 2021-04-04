#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll count_palindromes(string s)
{
    // initialising counter to store the count of palindromic substring
	ll cnt = 0;

    //storing length of the input string
	ll len = s.size();

	// creating a boolean 2d vector of (len X len) size to mark true if the substring
	// corresponding to that cell is palindrome, else mark false
	vector<vector < bool> > dp(len, vector<bool> (len));

	// traversing the boolean 2d vector to fill the upper half of it separated by the main diagonal
	for (ll gap = 0; gap < len; gap++)	// traversing for different substring lengths
	{
		for (ll i = 0, j = gap; j < len; i++, j++)
		{
			// if substring length is 1, then that cell is marked true
			if (gap == 0)
			{
				dp[i][j] = true;
			}
			else if (gap == 1)	// if substring length is 2
			{
				if (s[i] == s[j])	// if first and last characters of the substring is true, then marked true
					dp[i][j] = true;
				else	// else marked false
					dp[i][j] = false;
			}
			else	// if substring length is greater than 2
			{
			 	// if first and last characters of the substring is true and string
				// between the first and last character of the substring is palindromic,
				// then marked true
				if ((s[i] == s[j]) && (dp[i + 1][j - 1]))
					dp[i][j] = true;
				else	// else marked false
					dp[i][j] = false;
			}
			if (dp[i][j])	// if the cell value is true then increment counter cnt, else do nothing
				cnt++;
		}
	}

    return cnt;
}

int main()
{
	cout << "Enter a string of length greater than or equal to 50" << endl;
	string str;
	cin >> str;

    // storing the count of palindromes returned by the function in the result
	ll res = count_palindromes(str);

	cout << "\nThe total count of the number of non-empty sub strings that are palindromes is : " << endl;
	cout << res << endl;

	return 0;
}
