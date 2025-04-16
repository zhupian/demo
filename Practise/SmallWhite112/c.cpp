#include <bits/stdc++.h>
using namespace std;
#define int long long
void fn()
{
    int n, m, k, q;
    cin >> n >> m >> k >> q;
    int ma = (k - 1) * m;
    if (k == 1 || q > ma)
    {
        cout << "No" << endl;
        return;
    }
    int mod = n % k;
    if ((q - mod) % k == 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
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