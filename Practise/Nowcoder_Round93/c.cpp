#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
#define int long long
#define endl '\n'
signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n; cin >> n;
	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	if (x1 == x2 && y1 == y2) {
		cout << "YES";
		return 0;
	}
	if ((x1 == 2 && y1 == n) || (x2 == 2 && y2 == n)) {
		cout << "NO";
		return 0;
	}
	if (x1 > x2) swap(x1, x2), swap(y1, y2);
	if (x1 + 1 == x2 && y1 + 1 == y2 && y2 + 1 != n) {
		cout << "YES";
		return 0;
	}
	if (x1 + 1 == x2 && y1 - 1 == y2) {
		cout << "YES";
		return 0;
	}
	cout << "NO";
	return 0;
}