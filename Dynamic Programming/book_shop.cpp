#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int main()
{
    int n,x; // If you use ll here, it will be runtime error (>500 MB memory)
    cin>>n>>x;
    vector<int> price(n),page(n);
    for(int &e:price) cin>>e;
    for(int &e:page) cin>>e;

    vector<vector<int>> dp(n+1,vector<int>(x+1,0)); // dp[i][j] means i books available and j max money we have
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=x;j++)
        {
            dp[i][j]=dp[i-1][j];
            if(j>=price[i-1])
                dp[i][j]=max(dp[i][j],dp[i-1][j-price[i-1]]+page[i-1]); // ith book here has index i-1
        }
    }

    cout<<dp[n][x];

    return 0;
}
