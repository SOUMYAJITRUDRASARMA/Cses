#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

ll pow_mod(ll a,ll n)
{
    a%=MOD;
    ll res=1;

    while(n>0)
    {
        if(n&1)
            res=(res*a)%MOD;
        a=(a*a)%MOD;
        n>>=1;
    }
    return res;
}

int main()
{
    ll n;
    cin>>n;

    cout<<pow_mod(2,n);

    return 0;
}
