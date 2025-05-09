#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
int n, k;
vector<string> arr(N);
bool check(long long mid)
{
    int ans = 1;
    long long f2 = 0, sum = 0;
    for (int i = 1; i <= n; i++)
    {
        for (auto x : arr[i])
        {
            if (x == '2')
                f2 += 1;
            else if (x == '5')
                sum = 1LL * sum + f2;
        }
        if (sum > mid)
        {
            ans += 1;
            sum = 0;
            f2 = 0;
            i -= 1;
        }
    }
    return ans <= k;
}
int main()
{
    cin >> n >> k;

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    long long l = 0, r = 1e14;
    while (l < r)
    {
        long long mid = (1ll * l + r) / 2;
        if (check(mid))
            r = mid;
        else
            l = mid + 1;
    }
    cout << l;
    return 0;
}