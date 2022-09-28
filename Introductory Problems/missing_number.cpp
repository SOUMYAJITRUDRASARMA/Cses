#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int n,e;
    cin>>n;
    vector<bool> v(n,false);

    for(int i=1;i<=n-1;i++)
    {
        cin>>e;
        v[e-1]=true;
    }

    for(int i=0;i<n;i++)
    {
        if(!v[i])
        {
            cout<<(i+1);
            break;
        }
    }

    return 0;
}
