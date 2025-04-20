#include <bits/stdc++.h>
using namespace std;
// memory 1/23+4
// https://loj.ac/p/130
const int N = 1e6 + 10;
typedef long long LL;
LL res[N], sum[N];
int n, q;
LL lowbits(LL x)
{
    return x & -x;
}
void add(int x, int y)
{
    for (int i = x; i <= n; i += lowbits(i))
        sum[i] += y;
}
LL query(int x)
{
    LL ans = 0;
    for (int i = x; i; i -= lowbits(i))
        ans += sum[i];
    return ans;
}
int main()
{
    cin >> n >> q;
    for (int i = 1; i <= n; i++)
    {
        cin >> res[i];
        add(i, res[i]);
    }
    while (q--)
    {
        int k, x, y;
        cin >> k >> x >> y;
        if (k == 1)
        {
            add(x, y);
        }
        else
        {
            cout << query(y) - query(x - 1) << endl;
        }
    }
    return 0;
}