#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
#define int long long
#define endl '\n'
void fn()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a == -1)
    {
        if (b == 0 && c == 1)
        {
            cout << "YES";
            return;
        }
    }
    else if (a == 1)
    {
        if (b == 0 && c == -1)
        {
            cout << "YES";
            return;
        }
    }
    else if (a == 0)
    {
        if ((b != 0 && c == 0))
        {
            cout << "YES";
            return;
        }
    }
    cout << "NO";
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // int t;cin>>t;
    while (t--)
    {
        fn();
    }
    return 0;
}