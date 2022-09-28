#include <bits/stdc++.h>
#define ll long long

using namespace std;

pair<ll,ll> get_range(ll a,ll k)
{
    return make_pair(a-k,a+k);
}

int main()
{
    ll n,m,k;
    cin>>n>>m>>k;

    vector<ll> a(n),b(m);
    for(int &e:a) cin>>e;
    for(int &e:b) cin>>e;

    sort(a.begin(),a.end(),greater());
    sort(b.begin(),b.end(),greater());

    for(auto it= )

    return 0;
}
