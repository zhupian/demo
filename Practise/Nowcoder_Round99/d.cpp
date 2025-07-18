#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x, p;
		cin >> x >> p;
		int c = (p - 1) / x;
		int extra = p - c * x;
		int even = c * (x - 1);
		if (extra == x) {
			cout << 2 * c + 1 << endl;
		}
		else {
			cout << (even + extra) * 2 << endl;
		}
	}
	return 0;
}