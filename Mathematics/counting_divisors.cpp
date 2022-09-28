#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int x;
        cin>>x;

        ll cnt=1;
        for(int i=2;i*i<=x;i++)
        {
            if(x%i==0)
            {
                //int k=(int)(log(x)/log(i));
                int k=0;
                while(x%i==0)
                {
                    k++;
                    x/=i;
                }
                cnt*=k+1;
                //x/=(int)pow(i,k);
                //cout<<i<<" "<<k<<" "<<x<<" "<<cnt<<endl;
            }
        }

        if(x!=1)
            cnt*=2;

        cout<<cnt<<endl;
    }

    return 0;
}
