#include <bits/stdc++.h>
using namespace std;
const int N = 1e4 + 2000;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(N, 0), dp(N, N);
    dp[1] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        for (int j = i + 1; j <= arr[i] + i && j <= n; j++)
        {
            dp[j] = min(dp[i] + 1, dp[j]);
            // cout<<dp[j]<<' '<<j<<' '<<i<<endl;
        }
    }
    cout << dp[n];
    return 0;
}