#include <bits/stdc++.h>
#define ll long long

using namespace std;

//int cnt;
set<string> st;

void get_permutations(string &s,int i)
{
    if(i==s.size())
    {
        //cout<<s<<endl;
        st.insert(s);
        //cnt++;
        return;
    }

    for(int j=i;j<s.size();j++)
    {
        swap(s[i],s[j]);
        get_permutations(s,i+1);
        swap(s[i],s[j]);
    }
}

int main()
{
    int n;
    string s;
    cin>>s;
    n=s.size();
    //cnt=0;
    get_permutations(s,0);
    cout<<st.size()<<endl;
    for(string e:st) cout<<e<<endl;

    return 0;
}
