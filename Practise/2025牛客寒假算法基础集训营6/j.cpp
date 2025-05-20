#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
#define int long long
#define endl '\n'
int tk(int x, int y) {
    return 1LL * x * (x + 1) / 2 - 1LL * y * (y + 1) / 2;
}
void fn() {
    int x, y, n; cin >> n >> x >> y;
    int t = x, ma = 0;
    for (int i = 1; i <= min(n, y); i++) {
        int sum = 0;
        t += 1;
        sum += 1LL * t * (min(n, y) - i + 1);
        //cout<<sum<<' ';
        if (y < n) {
            sum += tk(t - 1, max(1LL * 0, t - (n - y) - 1));
        }
        // cout<<sum<<endl;
        ma = max(ma, sum);
    }
    cout << ma << endl;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t; cin >> t;
    while (t--) {
        fn();
    }
    return 0;
}