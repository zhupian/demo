#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;
const int N = 5e3 + 10;
const int mod = 998244353;
ll C[N][N];

void init() {
	for (int i = 0; i < N; i++) {
		C[i][0] = 1;
		for (int j = 1; j <= i; j++) {
			C[i][j] = (C[i - 1][j] + C[i - 1][j - 1]) % mod;
		}
	}
}

void solve() {
	int n;
	cin >> n;
	map<int, int>mp;
	ll ans = 0;
	for (int i = 1; i <= n; i++) {
		int x;
		cin >> x;
		mp[x]++;
		ans = (ans + C[n][i] * ((i + 1) / 2)) % mod;
	}

	for (auto [x, y] : mp) {
		for (int i = 1; i <= y; i++) {
			for (int j = 0; j < i; j++) {
				ans = (ans + C[y][i] * C[n - y][j] % mod * (i - (i + j + 1) / 2)) % mod;
			}
		}
	}

	cout << ans << endl;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);
	init();
	int T = 1;
	cin >> T;
	while (T--) {
		solve();
	}

	return 0;
}