#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 2e5 + 5;
vector<ll>a(N), mn(N), mx(N), g[N];

void dfs(int u, int p) {
	mn[u] = min(a[u] - mx[p], a[u]);
	mx[u] = max(a[u] - mn[p], a[u]);

	for (int v : g[u]) {
		if (v == p)continue;
		dfs(v, u);
	}
}

void solve() {
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)g[i].clear();
	for (int i = 1; i <= n; i++)cin >> a[i];

	for (int i = 1; i < n; i++) {
		int u, v;
		cin >> u >> v;
		g[u].push_back(v);
		g[v].push_back(u);
	}

	mn[0] = mx[0] = 0;
	dfs(1, 0);

	for (int i = 1; i <= n; i++)cout << mx[i] << " ";
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--)solve();
}