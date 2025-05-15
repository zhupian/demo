#include<bits/stdc++.h>
using namespace std;
void fn()
{
    int n; cin >> n;
    vector<int> arr(n + 1, 0);
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        if (i >= 2 && arr[i] != arr[i - 1]) ans += 1;
    }
    cout << ans << endl;
}
int main()
{
    int t; cin >> t;
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    while (t--)
    {
        fn();
    }
    return 0;
}