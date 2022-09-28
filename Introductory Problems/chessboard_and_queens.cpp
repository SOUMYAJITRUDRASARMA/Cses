#include <bits/stdc++.h>
#define ll long long
#define NOT_PLACED -1
#define MOD_DIFF(x,y) (((x)>(y))?((x)-(y)):((y)-(x)))

using namespace std;

vector<pair<int,int>> reserved;

void print_chess_board(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            //array element means row where queen in located for that column
            if(a[j]==i)
                printf("Q ");
            else
                printf("_ ");
        }
        printf("\n");
    }
}

bool check_n_queens(int a[],int k,int n)
{
    //to check diagonal cuts |row diff|==|col diff|
    //to check row cuts check array values
    //no need of checking columns
    //i and j are columns, values are rows

    for(int i=0;i<k;i++)
    {
        //for(int j=i+1;j<k;j++)
        //{
            //if((MOD_DIFF(i,j)==MOD_DIFF(a[i],a[j]))||(a[i]==a[j]))
            if((MOD_DIFF(i,k)==MOD_DIFF(a[i],a[k]))||(a[i]==a[k]))
                return false;
        //}
    }

    return true;

}

int print_n_queens(int a[],int i,int n)
{
    static int cnt=0;
    if(i==n)
    {
        //if(check_n_queens(a,i,n))
        //{
            cnt++;
            //printf("(%d)th arrangement -->\n\n",count);
            //print_chess_board(a,n);
            //printf("\n\n");
        //}
    }
    else
    {

        for(int j=0;j<n;j++)
        {
            if(find(reserved.begin(),reserved.end(),make_pair(j,i))!=reserved.end())
                continue;
            a[i]=j;
            if(check_n_queens(a,i,n))
            {
                print_n_queens(a,i+1,n);
            }
            a[i]=NOT_PLACED;
        }
    }

    return cnt; // returning after all combinations are done
}

int main()
{
    char c;
    int a[8];
    for(int i=0;i<8;a[i]=NOT_PLACED,i++);

    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            c=getchar();
            if(c=='*')
                reserved.push_back(make_pair(i,j));
        }
        getchar(); // skips newline
    }

    cout<<print_n_queens(a,0,8)<<endl;

    return 0;
}
