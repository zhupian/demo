#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
#define int long long
#define endl '\n'
void fn()
{
    int n;
    cin >> n;
    unordered_map<int, int> mp, sep;
    vector<int> arr(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        mp[arr[i]] += 1;
    }
    int q, v;
    cin >> q >> v;
    int mi = INT_MAX;
    for (int i = 1; i <= n; i++)
    {
        int sum = 0;
        mp[arr[i]] -= 1;

        int f = max(arr[i], v);
        for (auto &[x, y] : mp)
        {
            if (x > f)
                sum += y;
        }
        // cout<<sum<<' ';
        for (auto &[x, y] : sep)
        {
            if (x > v)
                sum += y;
        }
        sep[arr[i]] += 1;
        // cout<<sum<<endl;
        mi = min(mi, sum);
    }
    cout << mi;
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