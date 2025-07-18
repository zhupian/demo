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
	string s = to_string(n);
	for (int i = 0; i < s.size() - 1; i++) {
		if (s[i] == '9' && s[i + 1] == '9') {
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
	return 0;
}