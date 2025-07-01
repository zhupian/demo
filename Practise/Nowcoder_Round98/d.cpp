#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll n, m, k;

void dfs(ll x, vector<ll>& v, vector<vector<ll>>& ans) {
	if (x == n) {
		ans.push_back(v);
		return;
	}
	for (ll i = 1; i <= n - x; i++) {
		if (v.empty() || v.back() != i) {
			v.push_back(i);
			dfs(x + i, v, ans);
			v.pop_back();
		}
	}
}

void sp() {
	cin >> n;
	vector<vector<ll>> p;
	vector<ll> v;
	dfs(0, v, p);
	for (auto ans : p) {
		for (ll i = 0; i < ans.size(); i++) {
			cout << ans[i];
			cout << " \n"[i == ans.size() - 1];
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll __ = 1;
	// cin >> __;
	while (__--)
		sp();
	return 0;
}