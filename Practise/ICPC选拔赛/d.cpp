#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l, n;
    cin >> l >> n;
    vector<int> arr(n + 1, 0);
    int ma = 0, mi = 0;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        int x = min(arr[i], l + 1 - arr[i]);
        int y = max(arr[i], l + 1 - arr[i]);
        mi = max(mi, x);
        ma = max(y, ma);
    }
    cout << mi << ' ' << ma;
    return 0;
}