#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
#define int long long
#define endl '\n'
void fn() {
    int n, t; cin >> n >> t;
    vector<int> arr(n + 1, 0);
    int mi = n + 1, ma = 0;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        if (arr[i] == 1 && ma == 0) ma = i;
        if (arr[i] == 1) mi = i;
    }
    if (mi - ma + 1 > t) cout << "NO";
    else cout << "YES";
    cout << endl;
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