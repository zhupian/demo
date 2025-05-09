#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
#define int long long
#define endl '\n'
vector<int> adj[N];
int dfs(int u, int p) {
    int ma = 0;
    for (int v : adj[u]) {
        if (v != p) {
            int x = dfs(v, u) + 1;
            ma = max(ma, x);
        }
    }
    return ma;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, k;
    cin >> n >> k;
    for (int i = 1; i < n; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    cout << dfs(k, -1) + 1;
    return 0;
}