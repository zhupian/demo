#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
#define int long long
#define endl '\n'
void fn() {
    int n, m; cin >> n >> m;
    string s; cin >> s;
    if (n >= m) {
        string ans;
        for (int i = 0; i < m; i++) {
            ans += s[i];
        }
        cout << ans << endl;
        return;
    }
    cout << -1 << endl;
    return;

}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t; cin >> t;
    while (t--) {
        fn();
    }
    return 0;
}