#include <bits/stdc++.h>
using namespace std;
// memory 1/23+3
// https://www.acwing.com/problem/content/851/
const int N = 610;
int dis[N], g[N][N];
bool str[N];
int n, m;
int dijkstra()
{
    dis[1] = 0;
    for (int i = 0; i < n; i++)
    {
        int t = -1;
        for (int j = 1; j <= n; j++)
            if (!str[j] && (t == -1 || dis[t] > dis[j]))
                t = j;
        str[t] = true;
        for (int j = 1; j <= n; j++)
            dis[j] = min(dis[j], dis[t] + g[t][j]);
    }
    return dis[n];
}
int main()
{
    cin >> n >> m;
    memset(dis, 0x3f, sizeof(dis));
    memset(g, 0x3f, sizeof(g));
    for (int i = 0; i < m; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        g[a][b] = min(g[a][b], c);
    }
    int t = dijkstra();
    if (t == 0x3f3f3f3f)
        cout << "-1";
    else
        cout << t;
    return 0;
}