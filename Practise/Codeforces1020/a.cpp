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
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        s[i] = (s[i] == '0' ? '1' : '0');
        for (int j = 0; j < n; j++)
        {
            if (s[j] == '1')
                ans += 1;
        }
        s[i] = (s[i] == '0' ? '1' : '0');
    }
    cout << ans << endl;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    // int t=1;
    int t;
    cin >> t;
    while (t--)
    {
        fn();
    }
    return 0;
}