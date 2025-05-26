#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
#define int long long
#define endl '\n'
void fn() {
	int n, k; cin >> n >> k;
	int sum = k + 1;
	while (n >= 1 && k >= 1) {
		k -= 1;
		if (n % 2 == 1 && n != 1) {
			sum += k + 1;
		}
		else {
			sum += 1;
		}
		n /= 2;
	}
	cout << sum << endl;
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