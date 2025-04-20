#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e5 + 20;
int n, m;
int tr[N], res[N];
int lowbits(int x)
{
    return x & -x;
}
int add(int x, int v)
{
    for (int i = x; i <= n; i += lowbits(i))
        tr[i] += v;
}
void add1(int l, int r, int v)
{
    add(l, v);
    add(r + 1, -v);
}
int query(int k)
{
    int res = 0;
    for (int i = k; i; i -= lowbits(i))
        res += tr[i];
    return res;
}
signed main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> res[i];
        add(i, res[i] - res[i - 1]);
    }
    while (m--)
    {
        char t;
        cin >> t;
        if (t == 'C')
        {
            int l, r, v;
            cin >> l >> r >> v;
            add1(l, r, v);
        }
        else
        {
            int v;
            cin >> v;
            cout << query(v) << endl;
        }
    }
    return 0;
}