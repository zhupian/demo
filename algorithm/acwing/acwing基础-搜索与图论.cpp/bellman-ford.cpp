#include <bits/stdc++.h>
using namespace std;
const int N = 1010, M = 100010;
int dis[N], back[N];
bool str[N];
int n, m, k;
struct edge
{
    int a, b, c;
} edges[M];
int bellman_ford()
{
    dis[1] = 0;
    for (int i = 0; i < k; i++)
    {
        memcpy(back, dis, sizeof(dis));
        for (int j = 0; j < m; j++)
        {
            int a = edges[j].a, b = edges[j].b, c = edges[j].c;
            dis[b] = min(dis[b], back[a] + c);
        }
    }
    return dis[n];
}
int main()
{
    cin >> n >> m >> k;
    memset(dis, 0x3f, sizeof(dis));
    for (int i = 0; i < m; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        edges[i] = {a, b, c};
    }
    int t = bellman_ford();
    if (t > 0x3f3f3f3f / 2)
        cout << "impossible";
    else
        cout << t;
    return 0;
}