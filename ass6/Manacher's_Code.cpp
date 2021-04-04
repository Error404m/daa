#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	//Accept the string
string s;
cin>>s;
int n=s.length();
vector<int> d1(n);
//d1 stores the longestOdd Palindrome for indices
for (int i = 0, l = 0, r = -1; i < n; i++) {
    int k = (i > r) ? 1 : min(d1[l + r - i], r - i + 1);
    while (0 <= i - k && i + k < n && s[i - k] == s[i + k]) {
        k++;
    }
    d1[i] = k--;
    if (i + k > r) {
        l = i - k;
        r = i + k;
    }
}
	
	vector<int> d2(n);
	//d2 stores the longestEven palindromes  for indices
for (int i = 0, l = 0, r = -1; i < n; i++) {
    int k = (i > r) ? 0 : min(d2[l + r - i + 1], r - i + 1);
    while (0 <= i - k - 1 && i + k < n && s[i - k - 1] == s[i + k]) {
        k++;
    }
    d2[i] = k--;
    if (i + k > r) {
        l = i - k - 1;
        r = i + k ;
    }
}
int answer = 0;
        for(int i=0; i < d1.size(); ++i){
            answer += d1[i]/2 + 1; 
        }
       
        for(int i=0; i < d2.size(); ++i){
            answer += d2[i]/2; //2,4,6,8... => longestEven[i] / 2
        }
        cout<<answer<<endl;
}