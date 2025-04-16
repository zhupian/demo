#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long ans = 0;
    vector<int> arr(n + 1, 0);
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end());
    for (int i = 1; i <= n; i++)
    {
        int x = arr[i];
        ans += (i % 2 == 1 ? x : -x);
    }
    cout << ans;
    return 0;
}