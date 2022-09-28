#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> dp(n+1,INT_MAX);
    dp[0]=0;

    for(int i=1;i<=n;i++)
    {
        set<int> s;
        for(char dig:to_string(i))
            s.insert(dig-'0');

        for(int dig:s)
            if(dig!=0)
                dp[i]=min(dp[i],dp[i-dig]+1); // For the 1 digit numbers, i-dig never goes outside array index

        //cout<<"i="<<i<<" | s="; for(int e:s) cout<<e; cout<<" | "<<dp[i]; cout<<endl;
    }

    cout<<dp[n];

    return 0;
}
