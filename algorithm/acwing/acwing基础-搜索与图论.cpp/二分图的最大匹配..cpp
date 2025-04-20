#include <bits/stdc++.h>
using namespace std;
const int N = 510, M = 1e6;
int h[N], ne[M], e[M], idx;
int match[N];
bool st[N];
void add(int a, int b)
{
    e[idx] = b, ne[idx] = h[a], h[a] = idx++;
}

bool dfs(int u)
{
    for (int i = h[u]; i != -1; i = ne[i])
    {
        int v = e[i];
        if (st[v])
            continue;
        st[v] = true;
        if (!match[v] || dfs(match[v]))
        {
            match[v] = u;
            return true;
        }
    }
    return false;
}

int main()
{
    memset(h, -1, sizeof h);
    int n, m, k;
    cin >> n >> m >> k;
    for (int i = 0; i < k; i++)
    {
        int a, b;
        cin >> a >> b;
        add(a, b);
    }
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        memset(st, false, sizeof st);
        if (dfs(i))
            cnt++;
    }
    cout << cnt;
    return 0;
}
