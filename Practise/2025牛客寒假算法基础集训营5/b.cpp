#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
#define int long long
#define endl '\n'
void fn() {
	int n, t, k; cin >> n >> t >> k;
	int ans = n / t;
	while ((ans * t + k) > n) ans -= 1;
	cout << min(ans, k + 1) << endl;
	//这个小题竟然搞了这么久,哎
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