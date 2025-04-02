#include <bits/stdc++.h>
#define int long long
using namespace std;
int T, n, k, a[5005], i, sum, maxn;
signed main()
{
    cin >> T;
    while (T--)
    {
        cin >> n >> k;
        for (i = 1; i <= n; i++)
            cin >> a[i];
        if (k == 1)
            cout << max(*max_element(a + 1, a + n) + a[n], *max_element(a + 2, a + n + 1) + a[1]) << endl;
        else
        {
            sort(a + 1, a + n + 1, greater<int>());
            sum = 0;
            for (i = 1; i <= k + 1; i++)
                sum += a[i];
            cout << sum << endl;
        }
    }
    return 0;
}