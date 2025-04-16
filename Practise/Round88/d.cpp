#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
#define int long long
#define endl '\n'

void fn()
{
    int x;
    cin >> x;
    bool ok = false;
    for (int i = 30; i >= 0; --i)
    {
        if ((x >> i) & 1)
        {
            ok = true;
        }
        if (ok && (x >> i & 1) == 0)
        {
            cout << (1LL << i) << endl;
            return;
        }
    }
    cout << -1 << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        fn();
    }
    return 0;
}