#include <bits/stdc++.h>
using namespace std;
#define int long long
void fn()
{
    int n, k;
    cin >> n >> k;
    int ans = 0;
    if (n % 2 == 1)
        n -= k, ans = 1;
    k -= 1;
    ans += (n + k - 1) / k;
    cout << ans << endl;
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        fn();
    }
    return 0;
}