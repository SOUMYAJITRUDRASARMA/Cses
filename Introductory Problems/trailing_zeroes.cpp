#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll n,cnt=0;
    cin>>n;

    for(ll e=5;e<=n;e*=5)
    {
        cnt+=n/e;
    }

    cout<<cnt;

    return 0;
}
