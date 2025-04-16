#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
#define int long long
#define endl '\n'
void fn()
{
    int n;
    cin >> n;
    vector<int> arr(n + 1, 0);
    unordered_map<int, int> mp;
    int ma = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        mp[arr[i]] += 1;
        ma = max(ma, arr[i]);
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (mp[i])
            ans += i;
    }
    cout << ans;
    return;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // int t;cin>>t;
    while (t--)
    {
        fn();
    }
    return 0;
}