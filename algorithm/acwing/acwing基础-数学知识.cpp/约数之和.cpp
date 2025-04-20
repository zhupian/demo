#include <bits/stdc++.h>
using namespace std;
long long sn = 1, mod = 1e9 + 7;
int main()
{
    int n;
    cin >> n;
    unordered_map<int, int> res;
    for (int j = 1; j <= n; j++)
    {
        int x;
        cin >> x;
        for (int i = 2; i <= x / i; i++)
        {
            while (x % i == 0)
            {
                res[i] += 1;
                x /= i;
            }
        }
        if (x > 1)
            res[x] += 1;
    }
    for (auto x : res)
    {
        int a = x.first, b = x.second;
        long long ans = 1;
        while (b--)
        {
            ans = (ans * a + 1) % mod;
        }
        sn = sn * ans % mod;
    }
    cout << sn;
    return 0;
}