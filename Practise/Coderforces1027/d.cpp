#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
#define int long long
#define endl '\n'
void fn()
{
	int n;
	cin >> n;
	vector<pair<int, int>> arrx(n + 1), arry(n + 1);
	for (int i = 1; i <= n; i++)
	{
		cin >> arrx[i].first;
		cin >> arrx[i].second;
		arry[i].first = arrx[i].second;
		arry[i].second = arrx[i].first;
	}
	sort(arrx.begin() + 1, arrx.end());
	sort(arry.begin() + 1, arry.end());
	int mii = LLONG_MAX;
	auto check = [&](int a, int b, int c, int d, bool ok)
	{
		int ma = LLONG_MIN, mi = LLONG_MAX;
		if (ok)
		{
			for (int i = c; i <= d; i++)
			{
				ma = max(ma, arrx[i].second);
				mi = min(mi, arrx[i].second);
			}
		}
		else
		{
			for (int i = c; i <= d; i++)
			{
				ma = max(ma, arry[i].second);
				mi = min(mi, arry[i].second);
			}
		}
		int s = 1LL * (a - b + 1) * (ma - mi + 1);
		if (s <= n - 1)
		{
			s += min(a - b + 1, ma - mi + 1);
		}
		mii = min(mii, s);
	};
	if (n == 1)
	{
		cout << 1 << endl;
		return;
	}
	check(arrx[n].first, arrx[2].first, 2, n, true);
	check(arrx[n - 1].first, arrx[1].first, 1, n - 1, true);
	check(arry[n].first, arry[2].first, 2, n, false);
	check(arry[n - 1].first, arry[1].first, 1, n - 1, false);
	cout << mii << endl;
}
signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		fn();
	}
	return 0;
}