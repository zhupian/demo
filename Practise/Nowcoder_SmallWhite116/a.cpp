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
	vector<int> a(3, 0);
	cin >> a[0] >> a[1] >> a[2];
	int ma = 0;
	ma = max(a[0], a[1]);
	ma = max(ma, a[2]);
	int x; cin >> x;
	if (a[x - 1] == ma) cout << "Yes";
	else cout << "No";
	return 0;
}