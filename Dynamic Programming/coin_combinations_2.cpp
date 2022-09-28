#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int main()
{
    ll n;
    ll x;
    cin>>n;
    cin>>x;
    vector<ll> coins(n);
    for(ll &e:coins) cin>>e;

    vector<ll> dpCnt(x+1,0);
    dpCnt[0]=0;

    // Looping over coins first then dp, allows for unique ...
    for(ll coin:coins)
    {
        for(ll i=1;i<=x;i++)
        {
            if(i-coin<0)
                continue;
            else if(i-coin==0)
                dpCnt[i]=(dpCnt[i]+1)%MOD;
            else
                dpCnt[i]=(dpCnt[i]+dpCnt[i-coin])%MOD;
        }
    }

    cout<<dpCnt[x];

    return 0;
}
