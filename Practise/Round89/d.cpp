#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 9;
const int p = 1e9 + 7;
#define int long long
#define endl '\n'
int fact[N], infact[N];
int quick(int a, int b, int p)
{
    int res = 1;
    while (b)
    {
        if (b & 1)
            res = 1LL * res * a % p;
        b >>= 1;
        a = (1LL * a * a % p);
    }
    return res;
}
void fn()
{
    int k, n;
    cin >> n >> k;
    if (n == k)
    {
        cout << 2 << endl;
        return;
    }
    if (k % 2 == 1)
    {
        cout << quick(2, n, p);
        return;
    }
    else
    {
        cout << quick(2, n - 1, p);
        return;
    }
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