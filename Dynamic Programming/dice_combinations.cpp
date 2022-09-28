#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int main()
{
    ll n;
    cin>>n;

    vector<ll> dpCnt(n+1,0);
    dpCnt[1]=1;

    for(ll i=2;i<=n;i++)
    {
        for(ll j=1;j<=6;j++)
        {
            if(i-j>=1)
                dpCnt[i]=(dpCnt[i]+dpCnt[i-j])%MOD;
            else if(i-j==0)
                dpCnt[i]=(dpCnt[i]+1)%MOD;
        }
    }

    cout<<dpCnt[n];

    return 0;
}
