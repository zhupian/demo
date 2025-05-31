#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long ll;
int main() {
	cin.tie(0)->ios::sync_with_stdio(false);
	int n; cin >> n;
	vector<int>a(n + 1);
	int maxn = 0;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		maxn = max(maxn, a[i]);
	}
	vector<int>idx(maxn + 2), cnt(maxn + 2);
	for (int i = 1; i <= n; i++) ++cnt[a[i]];
	iota(idx.begin(), idx.end(), 0); //维护下标序列，初始化为0~maxn+1,到最大可行众数值
	sort(idx.begin(), idx.end(), [&](int a, int b) {
		return cnt[a] == cnt[b] ? a > b : cnt[a] > cnt[b];
	});
	vector<int>ans;
	pair<int, int>w;
	auto cmp = [&](pair<int, int>cur) {
		if (w.second < cur.second) w = cur;
		else if (w.second == cur.second && w.first < cur.first) w = cur;
	};
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (i == j) continue;
			--cnt[a[i]], ++cnt[a[i] + 1];
			--cnt[a[j]], ++cnt[a[j] - 1];
			w = make_pair(-1, -1);
			cmp({a[i] + 1, cnt[a[i] + 1]});
			cmp({a[j] - 1, cnt[a[j] - 1]}); //增加两个数作为新的候选众数
			for (int i = 0; i < 5; i++) cmp({idx[i], cnt[idx[i]]}); //第三种产生众数的情况
			ans.push_back(w.first);
			++cnt[a[i]], --cnt[a[i] + 1];
			++cnt[a[j]], --cnt[a[j] - 1];
		}
	}
	for (auto &x : set(ans.begin(), ans.end())) cout << x << ' ';
	cout << endl;
}
