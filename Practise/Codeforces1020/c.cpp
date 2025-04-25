#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
#define int long long
#define endl '\n'
void fn()
{
    int n, k, ma = 0, mi = INT_MAX;
    int x = -1;
    cin >> n >> k;
    set<int> set;
    bool ok = true;
    vector<int> arr(n + 1, 0), brr(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        ma = max(ma, arr[i]);
        mi = min(mi, arr[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> brr[i];
        if (brr[i] != -1)
        {
            x = arr[i] + brr[i];
            set.insert(x);
            if (x < ma)
                ok = false;
        }
    }
    if (!ok || set.size() >= 2)
    {
        cout << 0 << endl;
        return;
    }
    if (x != -1)
        for (int i = 1; i <= n; i++)
        {
            if (brr[i] == -1)
            {
                if (arr[i] + k < x || arr[i] > x)
                {
                    cout << 0 << endl;
                    return;
                }
            }
        }
    if (set.size() == 1)
    {
        cout << 1 << endl;
        return;
    }
    cout << k - (ma - mi) + 1 << endl;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    // int t=1;
    int t;
    cin >> t;
    while (t--)
    {
        fn();
    }
    return 0;
}