#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q;
    cin >> q;
    unordered_map<int, int> mp;
    int ma = -1, mi = INT_MAX;
    long long sum = 0;
    for (int t = 1; t <= q; t++)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (++mp[arr[i]] >= 2)
            {
                cout << "NO";
                return 0;
            }
            ma = max(ma, arr[i]);
            mi = min(mi, arr[i]);
            sum += arr[i];
        }
        for (int i = 1; i < n; i++)
        {
            if (arr[i] <= arr[i - 1])
            {
                cout << "NO";
                return 0;
            }
        }
    }
    long long k = 1LL * (ma + mi) * (ma - mi + 1) / 2;
    cout << (sum == k ? "YES" : "NO");
    return 0;
}