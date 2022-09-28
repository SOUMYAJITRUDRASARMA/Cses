#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

ll expMod(ll a,ll b,ll m)
{
    a%=m;
    ll res=1;
    while(b>0)
    {
        if(b&1)
            res=(res*a)%m;
        a=a*a%m;
        b>>=1;
    }
    return res;
}

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        cout<<expMod(a,expMod(b,c,MOD-1),MOD)<<endl;
    }

    return 0;
}
