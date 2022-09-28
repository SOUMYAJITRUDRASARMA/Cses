#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
//#define MOD 1e9+7

using namespace std;

int main()
{
    ll n,sum=0,a,b,c,x,y;
    cin>>n;

    for(ll i=1;i<=n;)
    {
        a=n/i;
        b=n/a;
        x=b-i+1;
        y=b+i;
        if(x%2==0) x/=2;
        else y/=2;
        c=(x%MOD)*(y%MOD);
        //sum=(sum+(n/i)*i)%MOD;
        sum=(sum+(a%MOD)*(c%MOD))%MOD;
        i=b+1;
        //cout<<a<<" "<<b<<" "<<c<<" "<<sum<<endl;
    }

    cout<<sum;

    return 0;
}
