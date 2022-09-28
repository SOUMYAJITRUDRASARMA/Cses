#include <bits/stdc++.h>
#define ll long long

using namespace std;

void print_gray(vector<bool> b)
{
    int n=b.size();
    cout<<b[0]; // MSB
    for(int i=1;i<n;i++)
        cout<<(b[i]^b[i-1]);
    cout<<endl;
}

void iterate_binary(vector<bool> b,int i)
{
    if(i==b.size())
    {
        print_gray(b);
        //for(bool e:b) cout<<e; cout<<endl;
        return;
    }

    b[i]=false;
    iterate_binary(b,i+1);
    b[i]=true;
    iterate_binary(b,i+1);
}

int main()
{
    int n;
    cin>>n;
    vector<bool> b(n,false);

    iterate_binary(b,0);

    return 0;
}
