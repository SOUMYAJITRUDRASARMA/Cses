#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<ll> p(n);
    ll d=__LONG_MAX__,total=0;

    for(ll &e:p) {cin>>e; total+=e;}
    /*sort(p.begin(),p.end(),greater<ll>());

    //for(ll e:p) cout<<e<<" "; cout<<endl;

    d=p.front();
    p.erase(p.begin());

    for(ll e:p)
    {
        d=(d>=e)?d-e:e-d;
    }*/

    for(ll i = 0; i < 1<<n; i++)
    {
        ll s = 0;
        for(ll j = 0; j < n; j++)
        {
            if(i & 1<<j) s += p[j];
        }
        ll curr = abs((total-s)-s);
        d = min(d, curr);
    }

    cout<<d;

    return 0;
}
