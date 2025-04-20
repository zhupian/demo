#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
#define int long long
int tr[N], arr[N], k[N];
int n;
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
int query(int k)
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
        add(i, 1);
        if (i != 1)
        {
            cin >> arr[i];
            arr[i] += 1;
        }
    }
    arr[1] = 1;
    for (int i = n; i >= 1; i--)
    {
        int l = 1, r = n;
        while (l < r)
        {
            int mid = (l + r) >> 1;
            int check = query(mid);
            if (check >= arr[i])
                r = mid;
            else
                l = mid + 1;
        }
        k[i] = l;
        add1(l, n, -1);
    }
    for (int i = 1; i <= n; i++)
        cout << k[i] << endl;
    return 0;
}