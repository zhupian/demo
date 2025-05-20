#include<bits/stdc++.h>
using namespace std;
void sol() {
	string s;
	cin >> s;
	int cha = 'a';
	map<char, int> h;
	for (auto &i : s) {
		h[i]++;
	}
	int sum = 0;
	for (auto &i : h) {
		sum += i.first - cha;
		sum += i.second;
		cha = i.first;
	}
	cout << sum << '\n';
	return;
}
signed main() {
//    freopen("A_in.txt","r",stdin);
//	freopen("A_out.txt","w",stdout);
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int _ = 1;
//	cin>>_;
	while (_--) sol();
	return 0;
}