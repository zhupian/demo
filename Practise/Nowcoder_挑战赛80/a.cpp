#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, q; cin >> n >> q;
	string s; cin >> s;
	long long sum = 0;
	unordered_map<int, int> mp, rp;
	for (int i = 1; i <= q; i++) {
		int l, r; cin >> l >> r;
		if (mp[l] == 0) {
			sum += n - r + 1;
		}
		else if (rp[l] > r) {
			sum += rp[l] - r;
		}
		cout << sum << endl;
		mp[l] += 1;
		if (rp[l] == 0) rp[l] = r;
		else rp[l] = min(rp[l], r);
	}
	return 0;
}