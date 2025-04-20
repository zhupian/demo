#include <iostream>
using namespace std;
const int N = 1010;
char g[N][N];
bool dg[N * N], udg[N * N], l[N * N];
int n;
void dfs(int u)
{
    if (u == n)
    {
        for (int i = 0; i < n; i++)
            cout << g[i] << endl;
        cout << endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (!l[i] && !dg[i + u] && !udg[i - u + n])
        {
            g[u][i] = 'Q';
            l[i] = dg[i + u] = udg[i - u + n] = true;
            dfs(u + 1);
            l[i] = dg[i + u] = udg[i - u + n] = false;
            g[u][i] = '.';
        }
    }
}
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            g[i][j] = '.';
    dfs(0);
    return 0;
}