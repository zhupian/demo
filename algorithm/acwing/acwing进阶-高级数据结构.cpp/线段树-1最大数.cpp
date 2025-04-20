#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5 + 10;
int d[3 * N];
int m, q;
int lastanswer = 0, node = 0;
void build(int l, int r, int p)
{
    if (l == r)
    {
        d[p] = -1;
        return;
    }
    int m = l + r >> 1;
    build(l, m, p * 2);
    build(m + 1, r, p * 2 + 1);
}
void update(int l, int r, int index, int idx, int p)
{
    if (l == r)
    {
        d[p] = max(d[p], idx);
        return;
    }
    int m = l + r >> 1;
    if (m >= index)
        update(l, m, index, idx, p * 2);
    else
        update(m + 1, r, index, idx, p * 2 + 1);
    d[p] = max(d[p * 2], d[p * 2 + 1]);
}
int sum(int l, int r, int s, int t, int p)
{
    if (s >= l && r >= t)
        return d[p];
    int m = (s + t) >> 1;
    int ma = 0;
    if (m >= l)
        ma = max(ma, sum(l, r, s, m, p * 2));
    if (m < r)
        ma = max(ma, sum(l, r, m + 1, t, p * 2 + 1));
    return ma;
}

signed main()
{
    cin >> m >> q;
    build(1, N, 1);
    while (m--)
    {
        char c;
        cin >> c;
        if (c == 'Q')
        {
            int L;
            cin >> L;
            int r = node, l = node - L + 1;
            lastanswer = sum(l, r, 1, N, 1);
            cout << lastanswer << endl;
        }
        else
        {
            int t;
            cin >> t;
            int idx = (t + lastanswer) % q;
            node += 1;
            update(1, N, node, idx, 1);
        }
    }
    return 0;
}