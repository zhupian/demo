#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
#define int long long
int p[N];
#define endl '\n'
long double fn(auto a, auto b, auto c) {
    return (c.second - a.second) * (b.first - a.first) -
           (b.second - a.second) * (c.first - a.first);
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    long double ans = 0.0;
    vector <pair<long double, long double>> arr(n + 1);
    long double ma = 0, t = 0;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i].first >> arr[i].second;
    }
    sort(arr.begin() + 1, arr.end());
    int top = 0;
    p[++top] = n;
    for (int i = n - 1; i >= 1; i--) {
        while (top >= 2 && fn(arr[p[top - 1]], arr[p[top ]], arr[i]) <= 0)
            top--;
        p[++top] = i;
    }
    for (int i = 1; i < top; i++) {
        ans += (arr[p[i]].second + arr[p[i + 1]].second) * (arr[p[i + 1]].first - arr[p[i]].first) / 2.0;
    }
    cout << fabs(ans) << endl;
    return 0;
}