#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

ll gcdExtended(ll a,ll b,ll &x,ll &y)
{
    if(a==0)
    {
        x=0,y=1;
        return b;
    }

    ll x1,y1;
    ll gcd=gcdExtended(b%a,a,x1,y1);
    x=y1-(b/a)*x1;
    y=x1;
    return gcd;
}

ll modInverse(ll b)
{
    ll x,y;
    ll g=gcdExtended(b,MOD,x,y);
    if(g!=1)
        return -1;
    return (x%MOD+MOD)%MOD;
}

ll modDivide(ll a,ll b)
{
    a=a%MOD;
    ll inv=modInverse(b);
    if(inv==-1)
        return inv;
    else
        return (inv*a)%MOD;
}

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
    ll n,x,k,num=1,sum=1,pdt=1,sumNumFact=1,sumNumFact2=1;
    bool oddExponent=false;
    cin>>n;
    vector<ll> kList(n);
    for(ll i=1;i<=n;i++)
    {
        cin>>x>>k;
        if(k%2!=0)
        {
            oddExponent=true;
        }
        kList[i-1]=k+1;
        num=(num*expMod(x,k,MOD))%MOD;
        sum=(sum*modDivide(expMod(x,k+1,MOD)-1,x-1))%MOD; // modDivide(a,b) = (a/b) % MOD
        /*ll sTemp=1,pp=1;
        for(ll j=1;j<=k;j++)
            sTemp=(sTemp+(pp=(pp*x)%MOD))%MOD;
        sum=(sum*sTemp)%MOD;*/
        sumNumFact=(sumNumFact*(k+1))%MOD;
        sumNumFact2=(sumNumFact2*(k+1))%(MOD-1);
    }
    pdt=expMod(num,sumNumFact/2,MOD);

    /*bool rem=false;
    for(ll k:kList)
    {
        if(k%2==0)
            pdt=(pdt*expMod(num,k/2))%MOD;
        else
        {
            if(rem)
            {
                pdt=(pdt*expMod(num,(k+1)/2))%MOD;
                rem=false;
            }
            else
            {
                pdt=(pdt*expMod(num,(k-1)/2))%MOD;
                rem=true;
            }
        }
    }*/

    cout<<sumNumFact<<" "<<sum<<" "<<pdt<<endl;

    return 0;
}
