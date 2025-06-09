#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
#define int long long
#define endl '\n'
void fn() {
	int n; cin >> n;
	vector<int> arr(n + 1, 0);
	int mi = INT_MAX;
	unordered_map<int, int> mp, fp;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
		mp[arr[i]] += 1;
	}
	if (arr[2] < arr[1]) reverse(arr.begin() + 1, arr.end());
	if (mp[arr[1]] == n && arr[1] % (n + 1) == 0) {
		cout << "YES" << endl;
		return;
	}
	int x = arr[2] - arr[1];
	int y = (arr[1] - x) / (n + 1);
	for (int i = 1; i <= n; i++) {
		int t = arr[i] - x * i;
		if (t < 0 || t % (n + 1) != 0 || t / (n + 1) != y) {
			cout << "NO" << endl;
			return;
		}
	}
	cout << "YES" << endl;
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