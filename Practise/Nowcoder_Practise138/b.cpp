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
    int n, m; cin >> n >> m;
    vector<int> arr(n + 1, 0), brr(m + 1, 0);
    for (int i = 1; i <= n; i++) cin >> arr[i];
    for (int j = 1; j <= m; j++) cin >> brr[j];
    sort(arr.begin(), arr.end());
    sort(brr.begin(), brr.end());
    int i = 1, j = 1;
    int sum = 0;
    while (i <= n && j <= m) {
        if (arr[i] <= brr[j]) {
            sum = 1LL * sum + arr[i] * (j - 1);
            i += 1;
        }
        else {
            sum = 1LL * sum + brr[j] * (i - 1);
            j += 1;
        }
    }
    while (i <= n) {
        sum = 1LL * sum + arr[i] * m;
        i += 1;
    }
    while (j <= m) {
        sum = 1LL * sum + brr[j] * n;
        j += 1;
    }
    cout << sum;
    return 0;
}