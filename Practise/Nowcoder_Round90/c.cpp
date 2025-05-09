#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
#define int long long
#define endl '\n'
void fn()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i)
    {
        cin >> b[i];
    }
    vector<long long> arr(n);
    for (int i = 0; i < n; ++i)
    {
        arr[i] = a[i] * (i + 1LL);
    }
    vector<int> k(n);
    iota(k.begin(), k.end(), 0);
    sort(k.begin(), k.end(), [&](int i, int j)
         { return arr[i] > arr[j]; });
    sort(b.begin(), b.end(), greater<int>());
    vector<int> ans(n);
    for (int i = 0; i < n; ++i)
    {
        ans[k[i]] = b[i];
    }
    for (int num : ans)
    {
        cout << num << " ";
    }
    cout << endl;
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