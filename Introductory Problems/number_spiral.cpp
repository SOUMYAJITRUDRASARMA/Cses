#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll y,x;
        cin>>y>>x;

        ll a=max(x,y);

        ll value;

        if(a==y)
        {
            if(y%2==0)
            {
                value=a*a-x+1;
            }
            else
            {
                value=(a-1)*(a-1)+x;
            }
        }
        else
        {
            if(x%2!=0)
            {
                value=a*a-y+1;
            }
            else
            {
                value=(a-1)*(a-1)+y;
            }
        }

        cout<<value<<endl;
    }

    return 0;
}
