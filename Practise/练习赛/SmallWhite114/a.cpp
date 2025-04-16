#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
#define int long long
#define endl '\n'
void fn()
{
    int n;
    cin >> n;
    vector<int> arr(n + 1, 0);
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
            arr[i] = min(5LL, arr[i] + 1);
        else
        {
            arr[i] = min(5LL, arr[i] - 1);
        }
        cout << arr[i] << ' ';
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