#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int n;
    ll a,prev,cnt=0;;
    cin>>n;
    n--;
    cin>>prev;

    while(n--)
    {
        cin>>a;
        if(a<prev)
        {
            cnt+=prev-a;
        }
        else
        {
            prev=a;
        }
    }

    cout<<cnt;

    return 0;
}
