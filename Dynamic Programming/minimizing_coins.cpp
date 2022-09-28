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

    vector<ll> dpCnt(x+1,INT_MAX); // -1 means cant be formed ...
    dpCnt[0]=0;

    for(ll i=1;i<=x;i++)
    {
        for(ll coin:coins)
        {
            if(i-coin<0)
                continue;
            else if(dpCnt[i-coin]==INT_MAX)
                continue;
            else
                dpCnt[i]=min(dpCnt[i],1+dpCnt[i-coin]);
        }
    }

    cout<<((dpCnt[x]!=INT_MAX)?dpCnt[x]:-1);

    return 0;
}
