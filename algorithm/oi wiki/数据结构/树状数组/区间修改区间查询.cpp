#include <bits/stdc++.h>
using namespace std;
// memory 1/23+4
// https://loj.ac/p/132
const int N = 1e6 + 10;
#define int long long
int n, q;
int tr1[N], tr2[N];

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
    // tr1和tr2维护的分别是di和di*i
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
    {
        res += (k + 1LL) * tr1[i] - tr2[i];
        // ai的前缀和=bi*(r+1)-bi*i
    }
    return res;
}
int getquery(int l, int r)
{
    return query(r) - query(l - 1);
}
signed main()
{
    cin >> n >> q;
    vector<int> d(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> d[i];
        add(i, d[i] - d[i - 1]);
    }
    while (q--)
    {
        int t;
        cin >> t;
        if (t == 1)
        {
            int l, r, x;
            cin >> l >> r >> x;
            add1(l, r, x);
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