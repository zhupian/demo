#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
#define int long long
#define endl '\n'
int n;
vector<pair<long double, long double>> ans;
unordered_map<long double, int> mp;
vector<long double> r, t(10);
vector<bool> ok(13, false);
bool f = false;
bool check(int i, int j) {
    long double a = (ans[i].first - ans[j].first) * (ans[i].first - ans[j].first);
    long double b = (ans[i].second - ans[j].second) * (ans[i].second - ans[j].second);
    long double c = sqrt(a + b);
    long double r1 = max(t[i], t[j]);
    long double r2 = min(t[i], t[j]);
    if ((c >= r1 + r2) || (c + r2 <= r1))
        return true;
    return false;
}
void dfs(int x) {
    if (f) return;
    if (x == n) {
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (check(i, j)) {

                }
                else {
                    return;
                }
            }
        }
        for (int i = 0; i < n; i++) {
            cout << mp[t[i]] + 1 << ' ';
        }
        f = true;
        return;
    }
    for (int i = 0; i < n; i++) {
        if (!ok[i]) {
            ok[i] = true;
            t[x] = r[i];
            dfs(x + 1);
            ok[i] = false;
        }
    }
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        long double a, b; cin >> a >> b;
        ans.push_back({a, b});
    }

    for (int i = 0; i < n; i++) {
        long double t;
        cin >> t;
        r.push_back(t);
        mp[r[i]] = i;
    }
    dfs(0);
    if (!f) {
        cout << -1;
    }
    return 0;
}