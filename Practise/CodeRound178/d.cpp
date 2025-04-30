#include<bits/stdc++.h>
using namespace std;
const int N = 4e5 + 20;
#define endl '\n'
const int M = 1e7;
bool ok[M + 1];//注意越界！！！
vector<long long> arr, pre(N, 0);
void fn() {
	int n; cin >> n;
	vector<int> an(n + 1, 0);
	for (int i = 1; i <= n; i++) cin >> an[i];
	sort(an.begin() + 1, an.end());
	long long sum = 0;
	int  ans = 0;
	for (int i = n; i >= 1; i--) {
		sum += an[i];
		if (sum >= pre[n - i + 1]) ans = max(ans, n - i + 1);
	}
	cout << n - ans << endl;
	return;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	for (int i = 2; i <= M; i++) {
		if (!ok[i]) {
			arr.push_back(i);
			for (long long j = 1LL * i * i; j <= M; j += i) {
				ok[j] = true;
			}
		}
	}
	for (int i = 1; i <= N; i++) {
		pre[i] = pre[i - 1] + arr[i - 1];
	}
	int t; cin >> t;
	while (t--) {
		fn();
	}
	return 0;
}