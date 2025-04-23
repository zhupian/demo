#include <bits/stdc++.h>
using namespace std;
const int N = 100010, M = 200010, INF = 0x3f3f3f3f;
int n, m;
int p[N];
int a[M], b[M], w[M];
int idx[M];
int find(int x)
{
    if (p[x] != x)
        p[x] = find(p[x]);
    return p[x];
}
int kruskal()
{
    iota(idx, idx + m, 0);
    sort(idx, idx + m, [&](int i, int j)
         { return w[i] < w[j]; });
    for (int i = 1; i <= n; i++)
        p[i] = i;
    int res = 0, cnt = 0;
    for (int i = 0; i < m; i++)
    {
        int edge_idx = idx[i];
        int a_edge = a[edge_idx], b_edge = b[edge_idx], w_edge = w[edge_idx];

        int pa = find(a_edge), pb = find(b_edge);
        if (pa != pb)
        {
            p[pa] = pb;
            res += w_edge;
            cnt++;
        }
    }
    return cnt == n - 1 ? res : INF;
}
int main()
{
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        cin >> a[i] >> b[i] >> w[i];
    }
    int t = kruskal();
    if (t == INF)
        cout << "impossible" << endl;
    else
        cout << t << endl;
    return 0;
}