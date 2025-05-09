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
	string s; cin >> s;
	int ans = 0;
	if (s[0] != 'w') ans += 1;
	if (s[1] != 'h') ans += 1;
	if (s[2] != 'i') ans += 1;
	if (s[3] != 'l') ans += 1;
	if (s[4] != 'e') ans += 1;
	cout << ans;
	return 0;
}