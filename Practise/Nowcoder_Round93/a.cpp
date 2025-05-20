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
    int x = pow(2, n);
    int y = pow(n, 3);
    if (x > y) cout << "B";
    else cout << "A";
    return 0;
}