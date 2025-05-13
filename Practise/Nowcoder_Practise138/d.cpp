#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
typedef long long ll;
#define endl '\n'
void solve() {
    int n;
    cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; ++ i) {
        cin >> s[i];
    }

    vector<int> st(17), vis(17);
    for (int i = 1; i <= 16; ++ i) {
        st[i] = (1 << i) - 1;
    }
    for (int i = 0; i < n; ++ i) {
        int len = s[i].size();
        vis[len] = 1;
        int x = 0;
        for (int j = 0; j < len; ++ j) {
            if (s[i][j] == '1') {
                x += 1 << j;
            }
        }

        st[len] &= x;
    }

    for (int i = 1; i <= 16; ++ i) {
        if (vis[i] && st[i] == 0) {
            cout << -1 << "\n";
            return;
        }
    }

    int m = 1;
    for (int i = 1; i <= 16; ++ i) {
        if (vis[i]) {
            m = lcm(m, i);
        }
    }

    for (int t = 1; t <= m; ++ t) {
        bool flag = true;
        for (int i = 1; i <= 16; ++ i) {
            if (!vis[i]) {
                continue;
            }

            int p = t % i == 0 ? i - 1 : t % i - 1;
            if (~st[i] >> p & 1) {
                flag = false;
                break;
            }
        }

        if (flag) {
            cout << t << "\n";
            return;
        }
    }
    cout << -1 << "\n";
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}