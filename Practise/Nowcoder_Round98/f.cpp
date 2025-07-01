#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
#define int long long
#define endl '\n'
int quick(int a, int b, int p) {
	int res = 1;
	while (b) {
		if (b & 1) res = 1LL * res * a % p;
		b >>= 1;
		a = 1LL * a * a % p;
	}
	return res;
}
signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	//int n; cin >> n;
	int x = 1;
	int p = 998244353;
	for (int i = 1; i <= 2; i++) {
		x = 1LL * x * 22 % p;
	}
	cout << x;
	return 0;
}