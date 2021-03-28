// C++ program to find maximum amount of gold collected from the given 2D gold field

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


// Function to find the maximum amount of gold collected
ll maxm_Gold_amnt(ll n, ll m, vector<vector<ll> > M)
    {
    	// Creating a matrix of the same size as of gold_matrix, in which each cell will contain the maximum amount of gold
    	// collected if the miner starts collecting from that cell
    	vector<vector<ll> > dp(n, vector<ll>(m, 0));

        // Last column cells will contain the same value of gold as in the original matrix
        for(ll i = 0 ;i < n; i++)
        dp[i][m-1] = M[i][m-1];

        // Storing maxm amount of gold collected in all cells except last column cells
            for(ll j = m-2; j >= 0; j--)
            {
                        for(ll i = 0; i < n; i++)
                        {
                        	// if first row then moves that will be possible are right or right_down
                                if(i == 0)
                                {
                                	// if next row exists then right and right_down moves are possible
                                    if((i+1) < n)
                                     dp[i][j] = M[i][j] + max(dp[i][j+1],dp[i+1][j+1]);
                                    else  // right_down move is not possible
                                    dp[i][j] = M[i][j] + dp[i][j+1];
                                }
                               // if last row then moves that will be possible are right and right_up
                                else if(i == (n-1))
                                {
                                    dp[i][j] = M[i][j] + max(dp[i][j+1],dp[i-1][j+1]);
                                }

                                // all rows except first and last will have right, right_down and right_up moves possible
                                else
                                {
                                    ll  m = max(dp[i+1][j+1],dp[i-1][j+1]);
                                    dp[i][j] = M[i][j] + max(dp[i][j+1],m);
                                }

                        }
             }

        // declaring variable to store maxm amount of gold collected
        ll maxm = -1;

        // finding maxm value in first column
        for(ll i = 0; i < n; i++)
        {
            if(dp[i][0] > maxm)
            maxm = dp[i][0];
        }

        // returning the maxm value obtained
        return maxm;
    }


// Driver Code
int main()
{
     ll n, m;
     cout<<"Enter the number of rows and columns : "<<endl;
     cin>>n>>m;

     vector<vector<ll> > gold_matrix(n, vector<ll>(m, 0));

     // Generating the matrix randomly
     srand(time(NULL));
     for(ll i = 0; i < n; i++)
     {
        for(ll j = 0; j < m; j++)
        {
                gold_matrix[i][j]=rand();
        }
     }

     // Storing and then printing the value returned by the maxm_gold function,i.e maximum amount of gold collected
     ll maxm = maxm_Gold_amnt(n,m,gold_matrix);
     cout<<"\nThe maximum amount of gold that can be collected is : ";
     cout << maxm<<endl;

     return 0;
}
