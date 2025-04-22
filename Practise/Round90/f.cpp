#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    unordered_map<int, int> mp, ans;
    for (int i = n; i >= 1; i--)
    {
        if (mp[i])
            continue;
        int x = 0;
        bool ok = false;
        for (int j = 30; j >= 0; j--)
        {
            if ((i >> j & 1))
                ok = true;
            else
            {
                if (ok)
                    x += (1 << j);
            }
        }
        mp[x] = 1;
        mp[i] = 1;
        ans[i] = x;
        ans[x] = i;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << ans[arr[i]] << ' ';
    }
    return 0;
}