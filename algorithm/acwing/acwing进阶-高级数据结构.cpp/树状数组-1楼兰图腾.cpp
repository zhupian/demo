#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5 + 10;
int n;
int tr[N], pre[N], back[N], res[N];
int lowbits(int x)
{
    return x & -x;
}
void add(int k, int v)
{
    for (int i = k; i <= n; i += lowbits(i))
        tr[i] += v;
}
int sum(int k)
{
    int res = 0;
    for (int i = k; i; i -= lowbits(i))
        res += tr[i];
    return res;
}
signed main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> res[i];
        int y = res[i];
        pre[i] = sum(n) - sum(y);
        back[i] = sum(y - 1);
        add(y, 1);
    }
    memset(tr, 0, sizeof tr);
    long long ans1 = 0, ans2 = 0;
    for (int i = n; i >= 1; i--)
    {
        int y = res[i];
        ans1 += pre[i] * (sum(n) - sum(y));
        ans2 += back[i] * sum(y - 1);
        add(y, 1);
    }
    cout << ans1 << ' ' << ans2;
    return 0;
}