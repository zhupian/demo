#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
const ll mi = -1e18;
void fn() {
	int n;
	cin >> n;
	vector<long long > a(n + 1), p(n + 1, 0), t;
	vector<bool> ok(n + 1, false);
	queue<int> q;
	vector<vector<int>> adj(n + 1);
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
	}
	for (int i = 1; i < n ; i++) {
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	q.push(1);
	ok[1] = true;
	while (!q.empty()) {
		int u = q.front();
		q.pop();
		t.push_back(u);
		for (int v : adj[u]) {
			if (ok[v] == false) {
				p[v] = u;
				q.push(v);
				ok[v] = true;
			}
		}
	}
	vector<long long > x(n + 1, 0), y(n + 1, 0);
	for (int u : t) {
		if (u == 1) {
			x[u] = a[u];
			y[u] = mi;
		} else {
			int pp = p[u];
			x[u] = a[u];
			if (y[pp] != mi) {
				x[u] = max(1LL * a[u] - y[pp], x[u]);
			}
			y[u] = max(1LL * a[u] - a[pp], 1LL * a[u] - x[pp]);
		}
	}
	vector<long long > ans(n + 1);
	for (int i = 1; i <= n; ++i) {
		ans[i] = max(x[i], y[i]);
		cout << ans[i] << ' ';
	}
	cout << endl;
	return;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t--) {
		fn();
	}

	return 0;
}