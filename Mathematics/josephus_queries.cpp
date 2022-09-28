#include <bits/stdc++.h>
#define ll long long

using namespace std;

int solve(int n,int k)
{
    if(n==1)
        return 1;
    if (k<=(n+1)/2)
    {
        if(2*k>n)
            return 2*k%n;
        else
            return 2*k;
    }

    int c=solve(n>>1,k-(n+1)/2);
    if (n&1)
        return 2*c+1;
    else
        return 2*c-1;
}

int main()
{
    ll q;
    cin>>q;
    while(q--)
    {
        ll n,k,pos;
        cin>>n>>k;
        cout<<solve(n,k)<<endl;
    }

    return 0;
}
