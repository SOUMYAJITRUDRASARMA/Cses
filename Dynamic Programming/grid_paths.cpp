#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int main()
{
    ll n;
    cin>>n;
    vector<vector<pair<ll,bool>>> dp(n,vector<pair<ll,bool>>(n,make_pair(0,true))); // true -> traversible , false -> trap
    dp[0][0].first=1;

    char ch;
    for(ll i=0;i<n;i++)
        for(ll j=0;j<n;j++)
        {
            cin>>ch;
            if(ch=='*')
                dp[i][j].second=false;
        }

    if(!dp[n-1][n-1].second)
    {
        cout<<0;
        return 0;
    }

    for(ll j=0;j<n;j++)
    {
        for(ll i=0;i<n;i++)
        {
            if(!dp[i][j].second)
                continue;

            if(i-1>=0)
                if(dp[i-1][j].second)
                    dp[i][j].first=(dp[i][j].first+dp[i-1][j].first)%MOD;
            if(j-1>=0)
                if(dp[i][j-1].second)
                    dp[i][j].first=(dp[i][j].first+dp[i][j-1].first)%MOD;
        }
    }

    cout<<dp[n-1][n-1].first;

    return 0;
}
