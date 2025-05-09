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
    int n; cin >> n;
    vector<char> arr(n + 1, 0);
    for (int i = 1; i <= n; i++) cin >> arr[i];
    vector<string> a(n + 1);
    int ma = 0, ans = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        int x = 0;
        for (int j = 0; j < a[i].size(); j++) {
            if (j == '/') break;
            x = x * 10 + a[i][j] - '0';
        }
        if (x > ma)
        {
            ma = x;
            ans = i;
        }
    }
    cout << arr[ans];
    return 0;
}