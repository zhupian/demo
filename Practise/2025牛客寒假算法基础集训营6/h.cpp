#include<bits/stdc++.h>
using namespace std;
void fn() {
    int n, m; cin >> n >> m;
    vector<int> arr(n + 1, 0);
    bool ok = true;
    while (m--) {
        int l, r, c; cin >> l >> r >> c;
        if ((r - l + 1) % 2 == 0) ok = true;
        else ok = false;
    }
    if (ok) {
        for (int i = n; i >= 1; i--)
            cout << i << ' ';
    }
    else {
        if (n % 2 == 0) {
            cout << n - 1 << ' ' << n << ' ';
            n -= 2;
        }
        else {
            cout << n << ' ';
            n -= 1;
        }
        for (int i = n; i >= 2; i -= 2) {
            cout << i - 1 << ' ' << i << ' ';
        }
    }
    cout << endl;
}
int main() {
    int t; cin >> t;
    while (t--) {
        fn();
    }
    return 0;
}