#include <bits/stdc++.h>
#define ll long long

using namespace std;

inline string solve(ll a,ll b)
{
    if((a+b)%3!=0)
        return "NO";

    ll k=(a+b)/3;
    if(a>=k&&b>=k)
        return "YES";
    else
        return "NO";
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        cout<<solve(a,b)<<endl;
    }

    return 0;
}
