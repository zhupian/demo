#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int N = 1e9 + 7;
int fn(int a, int b, int c) {
    int res = 1;
    while (b) {
        if (b & 1) res = res * a % c;
        b >>= 1;
        a = 1LL * a * a % c;
    }
    return res;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    while (n--) {
        int a, b; cin >> a >> b;
        if (a % b == 0) cout << "impossible";
        else cout << fn(a, b - 2, b);
        cout << endl;
    }
    return 0;
}