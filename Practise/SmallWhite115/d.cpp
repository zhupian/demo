#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int mp[N][26];
int main()
{
	int n; cin >> n;
	int d = 0;
	vector<string> arr(n + 1);
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
		d = __gcd(d, int(arr[i].size()));
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < arr[i].size(); j++)
		{
			mp[j % d][arr[i][j] - 'a']++;
		}
	}
	long long ans = 0;
	for (int i = 0; i < d; i++) {
		int ma = 0, sum = 0;
		for (int j = 0; j < 26; j++) {
			sum += mp[i][j];
			ma = max(ma, mp[i][j]);
		}
		ans += sum - ma;
	}
	cout << ans;
	return 0;
}