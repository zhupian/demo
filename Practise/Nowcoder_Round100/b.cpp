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
	vector<int> arr(2 * n + 1, 0);
	vector<int> an, bn;
	unordered_map<int, int> mp;
	for (int i = 1; i <= 2 * n; i++) {
		cin >> arr[i];
		mp[arr[i]] += 1;
		if (mp[arr[i]] == 2) bn.push_back(arr[i]);
		else an.push_back(arr[i]);
	}
	for (int i = 0; i < n; i++) cout << an[i] << " \n"[i == n - 1];
	for (int i = 0; i < n; i++) cout << bn[i] << ' ';

	return 0;
}