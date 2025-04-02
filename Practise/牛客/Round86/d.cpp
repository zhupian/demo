#include <bits/stdc++.h>
// #define int long long //二维数组可能会爆
#define pll pair<int, int>
#define INF 0x3f3f3f3f3f3f3f3f
using namespace std;
#define IOS                      \
    ios::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
const int N = 1e6 + 7;
const int mod = 1e9 + 7;
void solve()
{
    int x, y;
    cin >> x >> y;
    // if(x>y)swap(x,y);
    int ans = 3;
    if (x == y || (x & y) == 0)
        ans = 1;
    else
    {
        int a, b, c, d;
        a = x | y, b = x ^ y, c = x & y, d = gcd(x, y);
        for (auto i : {a, b, c, d})
            for (auto j : {x, y})
            {
                if ((i & j) == 0 || (i | j) == 0 || (i ^ j) == 0)
                    ans = 2;
            }
    }
    cout << ans << endl;
    return;
}
signed main()
{
    IOS;
    int _;
    cin >> _;
    while (_--)
    {
        solve();
    }
    return 0;
}
