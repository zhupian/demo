#include<bits/stdc++.h>
using namespace std;
void fn()
{
	int n; cin >> n;
	vector<int> arr(n + 1, 0);
	for (int i = 1; i <= n; i++)
	{
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end());

}
int main() {
	int t; cin >> t;
	while (t--) {
		fn();
	}
	return 0;
}