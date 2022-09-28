#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define MOD 1000000007

void dfs(int i, int j, int n, int m, vector<vector<bool>> &isFloor, vector<vector<bool>> &vis)
{
    if(i < 0 || j < 0 || i >= n || j >= m || vis[i][j] || !isFloor[i][j]) return;

    vis[i][j] = true;
    dfs(i + 1, j, n, m, isFloor, vis);
    dfs(i - 1, j, n, m, isFloor, vis);
    dfs(i, j + 1, n, m, isFloor, vis);
    dfs(i, j - 1, n, m, isFloor, vis);
}

int main()
{
    int n, m;
    char ch;
    cin >> n >> m;
    vector<vector<bool>> isFloor(n, vector<bool>(m)), vis(n, vector<bool>(m, false));
    for(vector<bool> &v: isFloor) for(int i = 0; i < m; i++) cin >> ch, v[i] = (ch == '.');

    int numRooms = 0;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            if(!vis[i][j] && isFloor[i][j]) dfs(i, j, n, m, isFloor, vis), numRooms++;  // 4 neighbour

    cout << numRooms << endl;
}
