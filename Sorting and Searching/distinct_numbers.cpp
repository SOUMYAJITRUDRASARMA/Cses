#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int n;
    cin>>n;

    ll a;
    set<ll> s;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        s.insert(a);
    }
    cout<<s.size();

    return 0;
}
