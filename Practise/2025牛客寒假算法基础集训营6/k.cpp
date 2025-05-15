#include<bits/stdc++.h>
using namespace std;
void fn()
{
    long long x, y; cin >> x >> y;
    if (y % 2 == 0)
    {
        cout << "NO" << endl;
        return;
    }
    if (x % 2 == 0)
    {
        if ((y - 1) % 4 == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
        return;
    }
    else {
        if ((y - 3) % 4 == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
        return;
    }
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