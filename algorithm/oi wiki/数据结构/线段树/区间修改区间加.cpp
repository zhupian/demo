#include <bits/stdc++.h>
using namespace std;
// memory 1/23+2
// https://www.acwing.com/problem/content/description/244/
#define int long long
const int N = 1e6 + 10;
int d[N], b[N], arr[N];
int n, m;
void build(int l, int r, int p)
{
    if (l == r)
    {
        d[p] = arr[l];
        return;
    }
    int m = l + r >> 1;
    build(l, m, p * 2);
    build(m + 1, r, p * 2 + 1);
    d[p] = d[p * 2] + d[p * 2 + 1];
}
void update(int l, int r, int c, int s, int t, int p)
{
    if (s >= l && t <= r)
    {
        d[p] += (t - s + 1) * c;
        b[p] += c;
        return;
    }
    int m = s + t >> 1;
    if (b[p] && s != t)
    {
        d[p * 2] += b[p] * (m - s + 1);
        d[p * 2 + 1] += b[p] * (t - m);
        b[p * 2] += b[p];
        b[p * 2 + 1] += b[p];
        b[p] = 0;
    }
    if (l <= m)
        update(l, r, c, s, m, p * 2);
    if (m < r)
        update(l, r, c, m + 1, t, p * 2 + 1);
    d[p] = d[p * 2] + d[p * 2 + 1];
}
int sum(int l, int r, int s, int t, int p)
{
    if (s >= l && t <= r)
        return d[p];
    int m = (s + t) >> 1;
    if (b[p])
    {
        d[p * 2] += b[p] * (m - s + 1);
        d[p * 2 + 1] += b[p] * (t - m);
        b[p * 2] += b[p];
        b[p * 2 + 1] += b[p];
        b[p] = 0;
    }
    int ans = 0;
    if (l <= m)
        ans += sum(l, r, s, m, p * 2);
    if (m < r)
        ans += sum(l, r, m + 1, t, p * 2 + 1);
    return ans;
}
signed main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    build(1, n, 1);
    while (m--)
    {
        char t;
        int l, r;
        cin >> t >> l >> r;
        if (t == 'C')
        {
            int k;
            cin >> k;
            update(l, r, k, 1, n, 1);
        }
        else
        {
            cout << sum(l, r, 1, n, 1) << endl;
        }
    }
    return 0;
}