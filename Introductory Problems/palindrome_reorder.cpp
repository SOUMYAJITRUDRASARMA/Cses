#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    string s,ans="";
    cin>>s;
    bool n_odd=s.length()%2!=0;

    vector<int> freq(26,0);
    for(char c:s)
        freq[c-'A']++;

    int cnt_odd=0,pos,tmp=-1;

    for(int num:freq)
    {
        tmp++;
        if(num%2!=0)
        {
            cnt_odd++;
            pos=tmp;
        }
        if((n_odd&&cnt_odd>1)||((!n_odd)&&cnt_odd>0))
        {
            cout<<"NO SOLUTION";
            return 0;
        }
    }

    for(int i=0;i<26;i++)
    {
        ans+=string(freq[i]/2,'A'+i);
    }
    string str=ans;
    reverse(str.begin(),str.end());
    if(n_odd)
        ans.push_back('A'+pos);

    ans+=str;

    cout<<ans;

    return 0;
}
