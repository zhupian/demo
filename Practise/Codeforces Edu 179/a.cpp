#include <bits/stdc++.h>

using namespace std;
#define int long long

void solve()
{
    int x;
    cin >> x;
    int t = 0;
    while (x)
    {
        x /= 2;
        t ++ ;
    }
    cout << t * 2 + 1 << '\n';
}

signed main()
{
    cin.tie(0)->sync_with_stdio(0);

    int T = 1;
    cin >> T;
    while (T -- ) solve();

    return 0;
}