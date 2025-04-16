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
    stack<char> sta;
    sta.push(s[0]);
    char c;
    for (int i = 0; i < n; i++)
    {
        if (!sta.empty() && sta.top() == s[i])
            sta.pop();
        else
            sta.push(s[i]);
    }
    int ans = sta.size() / 2;
    cout << ans << endl;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        fn();
    }
    return 0;
}