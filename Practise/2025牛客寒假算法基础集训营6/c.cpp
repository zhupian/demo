#include <bits/stdc++.h>
using namespace std;

void fn()
{
    unsigned long long k; cin >> k;
    unsigned long long ans = 1LL * k * 2;
    for (int i = 2; i <= 63; i++)
    {
        if (ans >= (1LL * (1LL << i))) ans += 2;
        else break;
        //cout << ans << ' ' << (1LL << i) << ' ';
    }
    cout << ans << endl;
}

int main()
{
    int t; cin >> t;
    while (t--)
    {
        fn();
    }
    return 0;
}
