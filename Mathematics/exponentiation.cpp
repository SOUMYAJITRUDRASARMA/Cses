#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

ll expMod(ll a,ll b)
{
    a%=MOD;
    ll res=1;
    while(b>0)
    {
        if(b&1)
            res=(res*a)%MOD;
        a=a*a%MOD;
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
        ll a,b;
        cin>>a>>b;
        cout<<expMod(a,b)<<endl;
    }

    return 0;
}
