#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
#define int long long
#define endl '\n'
void fn()
{
	int n;
	cin >> n;
	vector<int> arr(n + 1, 0);
	vector<pair<int, int>> pre;
	int ma = 0;
	for (int i = 1; i <= n; i++)
	{
		cin >> arr[i];
		if (arr[i] >= ma)
		{
			pre.push_back({arr[i], i});
			ma = arr[i];
		}
	}
	int j = pre.size() - 1;
	long long k = 0;
	for (int i = n; i >= 1; i--)
	{
		if (i < n)
			k += arr[i + 1];
		cout << k + ma << ' ';
		if (i == pre[j].second)
		{
			j -= 1;
			ma = pre[j].first;
		}
	}
	cout << endl;
}
signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	// int t=1;
	int t;
	cin >> t;
	while (t--)
	{
		fn();
	}
	return 0;
}