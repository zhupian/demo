#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
#define int long long
#define endl '\n'
void fn()
{
    int n, m, res, k = 0;
    vector<int> p(n + 1, 0);
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        cin >> k;
        p[k]++;
    }

    for (int i = n; i >= 1; i--)
        p[i] += p[i + 1];
    res = 0;
    for (int i = 1; i < n; i++)
    {
        res += 1ll * p[i] * p[n - i];
        res -= p[max(i, n - i)];
    }
    cout << res << '\n';

    memset(p, 0, n * 4 + 50);
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        fn();
    }
    return 0;
}