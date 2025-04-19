#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(N, 0);
    vector<bool> ok(N, false);
    ok[1] = true;
    int ma = 1;
    for (int i = 1; i <= n; i++)
    {
        if (i > ma)
        {
            cout << "false";
            return 0;
        }
        cin >> arr[i];
        ok[i + arr[i]] = true;
        ma = max(ma, i + arr[i]);
    }
    if (ma >= n)
        cout << "true";
    else
        cout << "false";
    return 0;
}