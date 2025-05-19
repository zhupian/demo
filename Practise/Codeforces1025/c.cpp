#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t;
	cin >> t;
	while (t--) {
		long long n;
		cin >> n;
		cout << "digit\n";
		cout.flush();
		string res;
		cin >> res;
		cout << "digit\n";
		cout.flush();
		cin >> res;
		int d = stoi(res);
		cout << "mul " << n << '\n';
		cout.flush();
		cin >> res;
		cout << "div " << d << '\n';
		cout.flush();
		cin >> res;
		cout << "!\n";
		cout.flush();
		cin >> res;
	}

	return 0;
}