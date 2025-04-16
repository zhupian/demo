#include <bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
#define int long long
int fn(int a, int b, int p)
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
    vector<int> arr(n + 1, 0), nex(n + 2, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin() + 1, arr.end());
    for (int i = 1; i <= n; i++)
    {
        nex[i] = nex[i - 1] + arr[i];
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        int l = arr[i] * i - nex[i];
        int r = nex[n] - nex[i] - arr[i] * (n - i);
        ans = (ans + l + r) % M;
    }
    cout << ans * fn(n, M - 2, M) % M;
    return 0;
}