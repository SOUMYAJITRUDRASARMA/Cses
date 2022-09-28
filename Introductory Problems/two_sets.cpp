#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll n;
    cin>>n;

    ll sum=(n*(n+1))/2;

    if(sum%2!=0) // This guarantees if n is even, n is divisible by 4
        cout<<"NO";
    else
    {
        cout<<"YES\n";
        sum/=2;

        if(n%2==0)
        {
            cout<<n/2<<endl;
            for(ll i=n/4+1;i<=3*n/4;i++)
                cout<<i<<" ";
            cout<<endl<<n/2<<endl;
            for(ll i=1;i<=n/4;i++)
                cout<<i<<" ";
            for(ll i=3*n/4+1;i<=n;i++)
                cout<<i<<" ";
        }
        else
        {
            cout<<(n/4)*2+1<<endl;
            for(ll i=0;i<n/4;i++)
            {
                cout<<(4*i+3)<<" "<<(4*i+4)<<" ";
            }
            cout<<n<<endl<<(n-(n/4)*2-1)<<endl;
            for(ll i=0;i<n/4+1;i++)
            {
                cout<<(4*i+1)<<" "<<(4*i+2)<<" ";
            }
        }
    }

    return 0;
}
