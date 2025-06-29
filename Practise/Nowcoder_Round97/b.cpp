#include<bits/stdc++.h>
using namespace std;
int main() {
	int n; cin >> n;
	int t = 1;
	while (n) {
		t *= n % 10;
		n /= 10;
	}
	if ((int)sqrt(t) * (int)sqrt(t) == t) cout << "YES";
	else cout << "NO";
	return 0;
}