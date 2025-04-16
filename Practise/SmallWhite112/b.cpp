#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int n;
    cin >> n;
    int ma = 0;
    vector<int> arr(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 2; i <= n - 1; i++)
    {
        if (arr[i] > arr[i - 1] || arr[i] > arr[i + 1])
        {
            int h = arr[i] - (arr[i - 1] + arr[i + 1]) / 2;
            ma = max(ma, h);
        }
    }
    cout << (ma == 0 ? -1 : ma);
    return 0;
}