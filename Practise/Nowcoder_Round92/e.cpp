#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
typedef long long ll;
#define endl '\n'
signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n; cin >> n;
	vector<int> arr(n + 2, 0);
	for (int i = 1; i <= n; i++) cin >> arr[i];
	ll sum = 1;
	cout << 1 << endl;
	for (int i = 1; i <= n + 1; i++) {
		int x = arr[i];
		int up = arr[i - 1] * 2;
		for (int i = 1; i <= up; i++) {
			if (x) {
				sum += 1;
				cout << sum;
				x -= 1;
			}
			else {
				cout << -1;
			}
			if (i % 2 == 0) cout << endl;
			else cout << ' ';
		}
	}
	return 0;
}