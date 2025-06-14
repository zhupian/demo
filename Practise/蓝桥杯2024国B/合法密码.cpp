#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
#define int long long
#define endl '\n'
bool check(string s) {
    bool ok1 = false, ok2 = false;
    for (auto c : s) {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            continue;
        }
        else if (c >= '0' && c <= '9') {
            ok1 = true;
        }
        else ok2 = true;
    }
    return ok1 && ok2;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int ans = 0;
    string s; cin >> s;
    int n = s.size();
    for (int i = 0; i < n; i++) {
        for (int len = 8; len <= 16; len++) {
            if (i + len - 1 >= n) break;
            string t = s.substr(i, len);
            if (check(t)) ans += 1;
        }
    }
    cout << ans;
    return 0;
}