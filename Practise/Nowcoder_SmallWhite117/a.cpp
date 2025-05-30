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
	unordered_map<char, int> mp;
	for (int i = 0; i < n; i++) {
		mp[s[i]] = 1;
	}
	for (int i = 0; i < 26; i++) {
		if (mp[i + 'a'] == mp[i + 'A'])
		{
			// cout<<mp[i+'a']<<' '<<mp[i+'A']<<endl;
		}
		else {
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
	return 0;

}