#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
#define int long long
#define endl '\n'
void fn() {
    int n; cin >> n;
    vector<int> arr(n + 1, 0);
    unordered_map<int, int> mp, indx;
    bool ok = true;
    int ma = 0, t = 0;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        ma = max(ma, arr[i]);
        mp[arr[i]] += 1;
        indx[arr[i]] = i;
        if (arr[i] != 0 && mp[arr[i]] >= 2) {
            ok = false;
        }
        if (arr[i] > n) ok = false;
    }
    if (!ok) {
        cout << -1 << endl;
        return;
    }
    for (int i = 1; i <= n && i <= ma; i++) {
        if (mp[i] == 0) t += 1;
    }
    if (t >= 2) {
        cout << -1 << endl;
        return;
    }
    vector<int> ans;
    for (int i = 1; i <= ma; i++) {
        if (mp[i] == 1) {
            ans.push_back(indx[i]);
        }
        else {
            ans.push_back(indx[ma]);
        }
    }
    cout << ma << endl;
    for (auto x : ans) {
        cout << x << ' ';
    }
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