#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int l = 1;
    int pre = abs(s[l] - s[l - 1]), ans = 0, sum = 0;
    for (int i = 1; i < n; i++)
    {
        sum += abs(s[i] - s[i - 1]);
        if (i >= k)
        {
            // cout<<sum<<' '<<pre<<endl;
            sum -= pre;
            l += 1;
            pre = abs(s[l] - s[l - 1]);
        }
        if (i >= k - 1)
            ans += sum;
    }
    cout << ans;
    return 0;
}