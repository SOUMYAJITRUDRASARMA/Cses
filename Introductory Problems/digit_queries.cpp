#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        ll k;
        cin>>k;

        ll num_digits=1,num_values=9;

        while(k>num_values*num_digits)
        {
            k-=num_values*num_digits;
            num_digits++;
            num_values*=10;
        }

        ll offset_num;
        if(num_digits==1) offset_num=k;
        else offset_num=(k-1)/num_digits;
        k-=offset_num*num_digits;

        ll temp=((ll)pow(10,num_digits-1));
        if(temp==1)
            temp=0;
        ll number=temp+offset_num;
        //cout<<number<<endl;
        if(num_digits==1)
            cout<<number<<endl;
        else
            cout<<to_string(number)[k-1]<<endl;
    }

    return 0;
}
