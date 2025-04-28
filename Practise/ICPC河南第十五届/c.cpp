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
	vector<int> arr, brr;
	int n; cin >> n;
	string s; cin >> s;
	int k = 0;
	for (int i = 0; i < n; i++) {
		if (i >= 1 && s[i] != s[i - 1]) {
			arr.push_back(k);
			brr.push_back(s[i - 1] - '0');
			k = 1;
		}
		else k += 1;
	}
	arr.push_back(k);
	brr.push_back(s[n - 1] - '0');
	int m = arr.size(), ma = 0, a = 0, b = 0;
	for (int i = 0; i < m - 1; i++) {

	}
	return 0;
}