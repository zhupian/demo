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
	int a, b, c; cin >> a >> b >> c;
	int n = a + b + c;
	//C(a+b+c,2)=n*(n-1)/2;
	int lcm = 2091 * 10455 / __gcd(2091, 10455);
	cout << lcm;
	return 0;
}