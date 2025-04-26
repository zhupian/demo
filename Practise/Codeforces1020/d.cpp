#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
#define int long long
#define endl '\n'
void fn()
{
    int n, m;
    cin >> n >> m;
    vector<int> arr(n + 1, 0), brr(m + 2, 0);
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    for (int j = 1; j <= m; j++)
        cin >> brr[j];
    vector<int> pre(n + 1, 0), suf(n + 2, 0);
    for (int i = 1, j = 1; i <= n; i++)
    {
        pre[i] = pre[i - 1];
        if (arr[i] >= brr[j])
        {
            pre[i] += 1;
            j += 1;
        }
        if (j == m + 1)
        {
            cout << 0 << endl;
            return;
        }
    }
    for (int i = n, j = m; i >= 1; i--)
    {
        suf[i] = suf[i + 1];
        if (arr[i] >= brr[j])
        {
            suf[i] += 1;
            j -= 1;
        }
    }
    int ans = INT_MAX;
    for (int i = 0; i <= n + 1; i++)
    {
        if (i == 0 && suf[i + 1] == m - 1)
        {
            ans = min(ans, brr[1]);
        }
        else if (i == n + 1 && pre[i - 1] == m - 1)
        {
            ans = min(ans, brr[m]);
        }
        else
        {
            if (pre[i - 1] + suf[i] == m - 1)
            {
                ans = min(ans, brr[pre[i - 1] + 1]);
            }
        }
    }
    cout << (ans == INT_MAX ? -1 : ans) << endl;
    return;
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