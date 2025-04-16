#include <bits/stdc++.h>
using namespace std;
#define int long long
int n, ans = LLONG_MAX;
vector<vector<int>> gen;
vector<int> sum, f;
vector<bool> ok;
void dfs(int u)
{
    for (int v : gen[u])
    {
        if (!ok[v])
        {
            ok[v] = true;
            f[v] = abs(u - v);
            dfs(v);
            sum[u] += sum[v] + f[v];
        }
    }
}
signed main()
{
    cin >> n;
    gen.resize(n + 1);
    sum.resize(n + 1, 0);
    f.resize(n + 1, 0);
    ok.resize(n + 1, false);

    for (int i = 1; i < n; i++)
    {
        int u, v;
        cin >> u >> v;
        gen[u].push_back(v);
        gen[v].push_back(u);
    }

    ok[1] = true;
    dfs(1);

    for (int i = 2; i <= n; i++)
    {
        int current_diff = abs(sum[1] - 2 * sum[i] - f[i]);
        ans = min(ans, current_diff);
    }

    cout << ans;
    return 0;
}