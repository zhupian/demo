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
	int n, m;
	cin >> n >> m;
	int x = 0, y = 0;
	vector<vector<char>> arr(n + 1, vector<char>(m + 1));
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> arr[i][j];
			if (arr[i][j] == '#') {
				x = i;
				y = j;
			}
		}
	}
	if (x == 1 || y == m) {
		for (int i = 1; i < n; i++) cout << "S";
		for (int j = 1; j < m; j++) cout << "D";
	}
	else {
		for (int j = 1; j < m; j++) cout << "D";
		for (int i = 1; i < n; i++) cout << "S";
	}
	return 0;
}