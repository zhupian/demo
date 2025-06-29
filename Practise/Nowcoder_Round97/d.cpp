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
	int index = -1, d = 0;
	bool ok = true;
	for (int i = 0; i < n; i++) {
		cout << 'z';
		if (s[i] != 'z') {
			index = i;
			d = 'z' - s[i];
			break;
		}
	}
	if (index == -1) return 0;
	for (int i = index + 1; i < n; i++) {
		int x = s[i] - 'a';
		if ((x + d) % 26 < x) ok = false;
		if (ok) {
			cout << (char)((x + d) % 26 + 'a');
		}
		else {
			cout << s[i];
		}
	}
	return 0;
}