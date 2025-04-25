#include <bits/stdc++.h>
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
using i128 = __int128;
using u128 = unsigned __int128;
constexpr int inf = 2E9;
void solve()
{
    int n, m;
    std::cin >> n >> m;
    std::vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        std::cin >> b[i];
    }
    std::vector<int> pre(m + 1, n + 1), suf(m + 1, -1);
    pre[0] = 0;
    for (int i = 0, j = 0; i < m; i++)
    {
        while (j < n && a[j] < b[i])
        {
            j++;
        }
        if (j == n)
        {
            break;
        }
        pre[i + 1] = ++j;
    }
    suf[m] = n;
    for (int i = m - 1, j = n - 1; i >= 0; i--)
    {
        while (j >= 0 && a[j] < b[i])
        {
            j--;
        }
        if (j < 0)
        {
            break;
        }
        suf[i] = j--;
    }

    if (pre[m] <= n)
    {
        std::cout << 0 << "\n";
        return;
    }
    int ans = inf;
    for (int i = 0; i < m; i++)
    {
        if (pre[i] <= suf[i + 1])
        {
            ans = std::min(ans, b[i]);
        }
    }
    if (ans == inf)
    {
        ans = -1;
    }
    std::cout << ans << "\n";
}
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}