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
	string s; cin >> s;
	string ans = "red";
	for (int i = 1; i < n ; i++) {
		if (s[i] == s[i - 1])
			for (int j = 0; j < 3; j++) {
				if (ans[j] != s[i - 1] && ans[j] != s[i + 1])
					s[i] = ans[j];
			}
	}
	cout << s;
	return 0;
}