#include<bits/stdc++.h>
using namespace std;
const int N = 3e5 + 9;
#define int long long
#define endl '\n'
int arr[N];
int lowbits(int x) {
	return x & -x;
}
void add(int x) {
	for (int i = x; i <= N; i += lowbits(i)) arr[i] += 1;
}
int query(int x) {
	int sum = 0;
	for (int i = x; i; i -= lowbits(i)) sum += arr[i];
	return sum;
}
signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int q; cin >> q;
	int ma = 0;
	for (int i = 1; i <= q; i++) {
		int l, r; cin >> l >> r;
		int sum = query(r) - query(l - 1);
		if (sum == 0) {
			ma = max(ma, r - l + 2);
			add(l);
			add(r + 1);
		}
		for (int i = 1; i <= 10; i++) {
			cout << query(i) - query(i - 1) << " \n"[i == 10];
		}
		//cout << ma << endl;
	}
	return 0;
}