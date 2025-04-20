#include <bits/stdc++.h>
using namespace std;
long long mod = 1e9 + 7, res = 1;
int main()
{
    unordered_map<int, int> ans;
    int n;
    cin >> n;
    for (int j = 1; j <= n; j++)
    {
        int x;
        cin >> x;
        for (int i = 2; i <= x / i; i++)
        {
            while (x % i == 0)
            {
                ans[i] += 1;
                x /= i;
            }
        }
        if (x > 1)
            ans[x] += 1;
    }
    for (auto x : ans)
    {
        res = res * (x.second + 1) % mod;
    }
    cout << res;
    return 0;
}