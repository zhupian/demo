#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int n;
    cin >> n;
    vector<int> arr(n + 1, 0);
    bool ok = true;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        if (i >= 2 && arr[i] != arr[i - 1])
            ok = false;
    }
    if (ok)
    {
        cout << 0;
        return 0;
    }
    sort(arr.begin() + 1, arr.end());
    if (arr[1] != 0)
    {
        cout << -1;
        return 0;
    }
    int ans = 1;
    for (int i = 2; i <= n; i++)
    {
        if (arr[i] != arr[i - 1])
            ans += arr[i] - arr[i - 1] - 1LL;
    }
    cout << ans;
    return 0;
}