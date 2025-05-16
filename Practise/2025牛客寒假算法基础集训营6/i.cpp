#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
#define int long long
#define endl '\n'
void fn() {
    int n, m; cin >> n >> m;
    vector<int> p(n + 1, 0), pos(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        cin >> p[i];
        pos[p[i]] = i;
    }
    vector<vector<int>> query(n + 1);
    vector<int> l(m), r(m), ans(m), c(m);
    for (int i = 0; i < m; i++) {
        cin >> l[i] >> r[i] >> c[i];
        query[p[c[i]]].push_back(i);
    }
    vector<int> bit(n + 1);
    auto sum = [&](int x) {
        int res = 0;
        for (int i = x; i; i -= i & -i)
            res += bit[i];
        return res;
    };
    auto add = [&](int x) {
        for (int i = x; i <= n; i += i & -i)
            bit[i]++;
    };
    for (int i = 1; i <= n; i++) {
        for (int j : query[i]) {
            ans[j] = sum(r[j]) - sum(l[j] - 1) + l[j];
        }
        add(pos[i]);
    }
    for (int i : ans) {
        cout << i << endl;
    }
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