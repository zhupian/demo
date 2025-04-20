#include <bits/stdc++.h>
using namespace std;
// memory 1/23+4
// https://loj.ac/p/131
const int N = 1e6 + 10;
int n, q;
int tr[N], d[N];
int lowbits(int x)
{
    return x & -x;
}
void add(int k, int v)
{
    for (int i = k; i <= n; i += lowbits(i))
        tr[i] += v;
}
void add1(int l, int r, int v)
{
    add(l, v);
    add(r + 1, -v);
}
long long query(int x)
{
    long long res = 0;
    for (int i = x; i; i -= lowbits(i))
        res += tr[i];
    return res;
}
int main()
{
    cin >> n >> q;
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
            int x, y, c;
            cin >> x >> y >> c;
            add1(x, y, c);
        }
        else
        {
            int x;
            cin >> x;
            cout << query(x) << endl;
        }
    }
    return 0;
}
