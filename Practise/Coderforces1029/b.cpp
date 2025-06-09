#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
#define int long long
#define endl '\n'
void fn() {
    int n; cin >> n;
    for (int i = 2; i <= n; i++) cout << i << ' ';
    cout << 1 << endl;
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