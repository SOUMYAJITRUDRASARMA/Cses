#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll n;
    cin>>n;

    cout<<"0"<<endl; if(n==1) return 0;
    cout<<"6"<<endl; if(n==2) return 0;
    cout<<"28"<<endl; if(n==3) return 0;
    cout<<"96"<<endl; if(n==4) return 0;

    for(ll i=5;i<=n;i++)
    {
        cout<<((i*i*(i*i-1)-(i-4)*(i-4)*8+128)/2 - (8+20*i))<<endl; // check the 8+20n correction reason ...
    }

    return 0;
}
