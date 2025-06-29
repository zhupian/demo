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
	int n, q; cin >> n >> q;
	vector<int> arr(n + 1, -1), brr(n + 2, -1);
	string s; cin >> s;
	int l = 0, r = n - 1;
	for (int i = 0; i < n; i++) {
		while (l <= i && arr[l] == -1 && s[i] == '#') {
			arr[l] = i;
			l += 1;
		}
	}
	for (int j = n - 1; j >= 0; j--) {
		while (r >= j && brr[r] == -1 && s[j] == '#') {
			brr[r] = j;
			r -= 1;
		}
	}
	for (int i = 1; i <= q; i++) {
		int x, y; cin >> x >> y;
		x -= 1;
		y -= 1;
		if (x > y) swap(x, y);
		if (arr[x] == -1 || brr[y] == -1 || arr[x] > y || brr[y] < x) cout << 0 << endl;
		else {
			cout << brr[y] - arr[x] + 1 << endl;
		}

	}
	return 0;

}