#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    int x = 2 * n;
    vector<long long> a(x);
    for (int i = 0; i < x; i++) {
        cin >> a[i];
    }

    vector<long long> sum(x);
    if (x > 0) {
        sum[0] = a[0];
        for (int i = 1; i < x; i++) {
            sum[i] = sum[i - 1] + a[i];
        }
    }

    vector<int> find(n + 1, -1);
    vector<int> pind(x, -1);

    for (int i = 0; i < x; i++) {
        if (find[a[i]] == -1) {
            find[a[i]] = i;
        } else {
            pind[i] = find[a[i]];
        }
    }

    vector<long long> dp(x, 0);
    if (x == 0) {
        cout << 0 << endl;
        return 0;
    }
    for (int i = 0; i < x; i++) {
        if (i > 0) {
            dp[i] = dp[i - 1];
        }
        int j = pind[i];
        if (j != -1) {
            long long msum;
            if (j >= 1) {
                msum = sum[i] - sum[j - 1];
            } else {
                msum = sum[i];
            }
            long long ans;
            if (j >= 1) {
                ans = dp[j - 1] + msum;
            } else {
                ans = msum;
            }
            if (ans > dp[i]) {
                dp[i] = ans;
            }
        }
    }

    cout << dp[x - 1] << endl;

    return 0;
}