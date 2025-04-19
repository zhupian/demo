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
    unordered_map<int, int> mp;
    int ans = 1e4 + 10;
    int t = n * (n - 1) / 2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            for (int k = n; k <= n + 20; k++)
            {
                if ((arr[i] % k) != (arr[j] % k))
                    mp[k] += 1;
                if (mp[k] == t)
                {
                    ans = min(ans, k);
                }
            }
        }
    }
    cout << ans;
    return 0;
}