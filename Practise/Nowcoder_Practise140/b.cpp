#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
#define int long long
#define endl '\n'
void fn() {
    int n, s; cin >> n >> s;
    int mi = s - 1;
    int t = n / s;
    int p1 = t + n / t - s;
    int p2 = t + 1 + abs((n / (t + 1)) - s);
    //cout << mi << ' ' << p1 << ' ' << p2 << endl;
    mi = min({p1, p2, mi});
    cout << mi << endl;
    return;

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