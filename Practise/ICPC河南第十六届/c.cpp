#include<bits/stdc++.h>
using namespace std;
const int N = 2e6 + 9;
#define int long long
#define endl '\n'
int p1[N], p2[N];
int find(int x, int *p) {
    if (p[x] != x) p[x] = find(p[x], p);
    return p[x];
}
unordered_map<int, int> cnt;
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m1, m2; cin >> n >> m1 >> m2;
    for (int i = 1; i <= n; i++) {
        p1[i] = p2[i] = i;
    }
    for (int i = 1; i <= m1; i++) {
        int a, b; cin >> a >> b;
        p1[find(a, p1)] = find(b, p1);
    }
    for (int i = 1; i <= m2; i++) {
        int a, b; cin >> a >> b;
        p2[find(a, p2)] = find(b, p2);
    }
    int res = 0, t = n + 1;
    for (int i = 1; i <= n; i++) {
        int a = find(i, p1), b = find(i, p2);
        cnt[a * t + b]++;
    }
    for (auto t : cnt) {
        res = res + 1LL * t.second * (t.second - 1) / 2;
    }
    cout << res;
    return 0;
}