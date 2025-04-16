#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
#define int long long
#define endl '\n'
void fn()
{
    vector<int> arr(7, 0);
    for (int i = 1; i <= 6; i++)
        cin >> arr[i];
    if ((arr[1] * 2 == (arr[3] + arr[5])) || (arr[3] * 2 == (arr[1] + arr[5])) || (arr[5] * 2 == (arr[3] + arr[1])))
    {
        cout << "YES" << endl;
        return;
    }
    if ((arr[2] * 2 == (arr[4] + arr[6])) || (arr[4] * 2 == (arr[2] + arr[6])) || (arr[6] * 2 == (arr[4] + arr[2])))
    {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
    return;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    // int t=1;
    int t;
    cin >> t;
    while (t--)
    {
        fn();
    }
    return 0;
}