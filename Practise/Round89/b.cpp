#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
#define int long long
#define endl '\n'
void fn()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int k = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            k += 1;
        }
        else
        {
            ans += (k / 2);
            k = 0;
        }
    }
    ans += (k / 2);
    cout << ans;
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