#include <bits/stdc++.h>
using namespace std;
const int N = 1000010;
int idx, e[N], h[2 * N], ne[N];
int ans = N;
bool st[N];
int n;
void add(int x, int y)
{
    e[idx] = y;
    ne[idx] = h[x];
    h[x] = idx++;
}
int dfs(int u)
{
    st[u] = true;
    int sum = 1, ret = 0;
    for (int i = h[u]; i != -1; i = ne[i])
    {
        int j = e[i];
        if (!st[j])
        {
            int s = dfs(j);
            sum += s;
            ret = max(ret, s);
        }
    }
    ret = max(ret, n - sum);
    ans = min(ans, ret);
    return sum;
}
int main()
{
    cin >> n;
    memset(h, -1, sizeof(h));
    for (int i = 0; i < n - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        add(a, b), add(b, a);
    }
    dfs(1);
    cout << ans;
    return 0;
}
