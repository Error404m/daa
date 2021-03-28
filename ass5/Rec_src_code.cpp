
// C++ program to find maximum amount of gold collected from the given 2D gold field
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll gold[100][100]={0};
ll n,m;
//Recursive function to calculate the maximum amount of gold collected
ll findmaxgold(ll row,ll col)
{
	if(col==m)
		return 0;
	if(row==-1)
		return 0;
	if(row==n)
		return 0;

		ll right=findmaxgold(row,col+1);
		ll right_up=findmaxgold(row-1,col+1);
		ll right_down=findmaxgold(row+1,col+1);

		return gold[row][col]=max(right,max(right_up,right_down));
}
//Driver Code
int main()
{
	ll i,j,ans=0;
	cin>>n>>m;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			{
				cin>>gold[i][j];
			}
	}
	for(i=0;i<n;i++)
	{
		ans=max(ans,findmaxgold(i,0));
	}
	cout<<ans<<endl;
}