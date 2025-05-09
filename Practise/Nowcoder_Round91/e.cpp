#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
#define int long long
#define endl '\n'
const int M = 998244353;
//n=2^k1+3^k2+5^k3……
//奇数的概率为  1/(k+1) 根据Legendre公式的优化
//k=n-__builtin_popcount(n)+1;
int quick(int a, int b)
{
	int res = 1;
	while (b) {
		if (b & 1) res = res * a % M;
		b >>= 1;
		a = 1LL * a * a % M;
	}
	return res;
}
void fn() {
	int n; cin >> n;
	cout << quick(n - __builtin_popcount(n) + 1, M - 2) << endl;
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