#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll cnt=0,max_cnt=0;
    char ch,ch_prev='B';

    ch=getchar();
    while(ch!='\n')
    {
        if(ch==ch_prev)
        {
            cnt++;
        }
        else
        {
            if(cnt>max_cnt)
                max_cnt=cnt;
            cnt=1;
            ch_prev=ch;
        }

        ch=getchar();
    }

    if(cnt>max_cnt)
        max_cnt=cnt;

    cout<<max_cnt;

    return 0;
}
