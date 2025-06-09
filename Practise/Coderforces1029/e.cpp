#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
#define int long long
#define endl '\n'
void fn() {
	int n; cin >> n;
	int ma = 0;
	vector<int> arr(n + 1, 0), brr(n + 1, 0);
	unordered_map<int, int> ap, bp;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
		int index = ap[arr[i]];
		if (index != 0) {
			ma = max(ma, index);
		}
		ap[arr[i]] = i;
	}
	for (int i = 1; i <= n; i++) {
		cin >> brr[i];
		if (arr[i] == brr[i]) ma = max(ma, i);
		int index = bp[brr[i]];
		if (index != 0 ) {
			ma = max(ma, index);
		}
		bp[brr[i]] = i;
	}
	ap.clear();
	bp.clear();
	for (int i = 1; i <= n; i++) {
		int bindex = bp[arr[i]];
		if (bindex != 0 && (i - bindex > 1)) {
			ma = max(ma, bindex);
		}
		int aindex = ap[brr[i]];
		if (aindex != 0 && (i - aindex) > 1) {
			ma = max(ma, aindex);
		}
		ap[arr[i]] = i;
		bp[brr[i]] = i;
	}
	cout << ma << endl;
	return;

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