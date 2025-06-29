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
	char a, b, c;
	cin >> a >> b >> c;
	if (a == b || a == c || b == c) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;

}