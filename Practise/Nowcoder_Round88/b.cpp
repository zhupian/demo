#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
#define int long long
#define endl '\n'
void fn()
{
    int xa, ya, xb, yb, xc, yc;
    cin >> xa >> ya >> xb >> yb >> xc >> yc;
    if ((xa == 0) && ((xb + xc) == 0))
    {
        cout << "YES" << endl;
        return;
    }
    if ((xb == 0) && ((xa + xc) == 0))
    {
        cout << "YES" << endl;
        return;
    }
    if ((xc == 0) && ((xb + xa) == 0))
    {
        cout << "YES" << endl;
        return;
    }
    if ((ya == 0) && ((yb + yc) == 0))
    {
        cout << "YES" << endl;
        return;
    }
    if ((yb == 0) && ((ya + yc) == 0))
    {
        cout << "YES" << endl;
        return;
    }
    if ((yc == 0) && ((ya + yb) == 0))
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