#include <bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
#define int long long
long long fn(int a, int b, int p)
{
    int res = 1;
    while (b)
    {
        if (b & 1)
            res = (res * a) % p;
        a = 1LL * a * a % p;
        b >>= 1;
    }
    return res;
}
signed main()
{
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    unordered_map<int, int> mp;
    int x = 0, y = n;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            x += abs(arr[j] - arr[i]);
        }
    }
    x *= 2;
    int gcd = __gcd(x, y);
    x /= gcd;
    y /= gcd;
    // cout << x << ' ' << y << ' ' << gcd << endl;
    int inv = fn(y, M - 2, M);
    int ans = (x % M) * inv % M;
    cout << ans;
    return 0;
}