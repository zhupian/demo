#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e5 + 20;
int tr1[N], tr2[N], res[N];
int n, m;
int lowbits(int x)
{
    return x & -x;
}
void add(int k, int v)
{
    int v1 = k * v;
    for (int i = k; i <= n; i += lowbits(i))
    {
        tr1[i] += v;
        tr2[i] += v1;
    }
}
void add1(int l, int r, int v)
{
    add(l, v);
    add(r + 1, v);
}
int query(int k)
{
    int res = 0;
    for (int i = k; i; i -= lowbits(i))
    {
        res += (k = 1LL) * tr1[i] - tr2[i];
    }
    return res;
}
int getquery(int l, int r)
{
    return query(r) - query(l - 1);
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
            int l, r;
            cin >> l >> r;
            cout << getquery(l, r) << endl;
        }
    }
    return 0;
}