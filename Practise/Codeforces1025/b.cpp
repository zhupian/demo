#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
#define endl '\n'
int check(int t) {
	int x = 0;
	t = bit_ceil((unsigned)(t));
	if (t >= 2) {
		for (int i = 0; i <= 30; ++i) {
			if (t >> i & 1) {
				x = i;
				break;
			}
		}
	}
	return x;
}
void fn() {
	int n, m, a, b; cin >> n >> m >> a >> b;
	int x = check(min(a, n - a + 1)) + check(m);
	int y = check(n) + check(min(b, m - b + 1));
	cout << min(x, y) + 1 << endl;
}

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t; cin >> t;
	while (t--) {
		fn();
	}
	return 0;
}