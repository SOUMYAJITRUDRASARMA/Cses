#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
#define NIL -1

using namespace std;

int dfs(int node,vector<vector<int>> &children,vector<int> &cntSub)
{
    for(int child:children[node])
        cntSub[node]+=1+dfs(child,children,cntSub); // like post-order traversal ...

    return cntSub[node];
}

int main()
{
    int n,dirBoss;
    cin>>n;
    vector<vector<int>> children(n);
    vector<int> cntSub(n,0);

    for(int i=1;i<n;i++)
    {
        cin>>dirBoss;
        dirBoss--;
        children[dirBoss].push_back(i);
    }

    dfs(0,children,cntSub);
    for(int e:cntSub)
        cout<<e<<" ";
}






struct treeNode
{
    int parent;
    //vector<int> children;
    int cntChildren;
};

/*int main()
{
    int n,dirBoss;
    cin>>n;
    treeNode defNode;
    defNode.cntChildren=0;
    defNode.parent=NIL;
    vector<treeNode> v(n,defNode);

    for(int i=1;i<n;i++)
    {
        cin>>dirBoss;
        dirBoss--;
        v[i].parent=dirBoss;
        int pos=i;
        while(v[pos].parent!=NIL)
        {
            pos=v[pos].parent;
            v[pos].cntChildren++;
        }
    }

    for(treeNode e:v)
        cout<<e.cntChildren<<" ";

    return 0;
}*/
