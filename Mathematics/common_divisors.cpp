#include <bits/stdc++.h>
#define ll long long
#define MAX 1000000

using namespace std;

int main()
{
    vector<int> occNum(MAX+1,0);
    int n,maxNum=INT_MIN;
    cin>>n;

    for(int i=0;i<n;i++)
    {
		int x;
		cin>>x;
		maxNum=max(maxNum,x);
		occNum[x]++;
	}

	for(int gcd=maxNum;gcd>0;gcd--)
    {
        int numDiv=0;
        for(int j=gcd;j<=maxNum;j+=gcd)
        {
            numDiv+=occNum[j];
        }
        if(numDiv>=2)
        {
            cout<<gcd;
            break;
        }
    }

    return 0;
}

/*int main()
{
    vector<int> divisors(MAX+1,0);
    int n,maxNum=INT_MIN;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        maxNum=max(maxNum,a);

        for(int div=1;div*div<a;div++)
        {
            if(a%div==0)
            {
                divisors[div]++;
                if(div!=a/div)
                    divisors[a/div]++;
            }
        }
    }

    //for(int i=1;i<=maxNum;i++) cout<<i<<":"<<divisors[i]<<"  "; cout<<endl;

    for(int i=maxNum;i>=1;i--)
    {
        if(divisors[i]>=2)
        {
            cout<<i;
            break;
        }
    }

    return 0;
}*/
