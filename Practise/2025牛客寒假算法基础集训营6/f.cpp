#include<bits/stdc++.h>
using namespace std;
#define int long long
#define MP make_pair
const int N = 1e5;
int n;
pair<int, int> a[N + 10];
void solve()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int b;
        cin >> a[i].second >> b;
        a[i].first = a[i].second + b;
    }
    sort(a + 1, a + 1 + n);
    int last = a[1].first;
    int tmp = a[1].second;
    for (int i = 2; i <= n; i++)
    {
        if (tmp >= a[i].second)
        {
            tmp = a[i].first;
        }
        else
        {
            tmp = max(a[i].second, last);
        }
        last = max(last, a[i].first);
    }
    cout << tmp << '\n';
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T = 1;
    cin >> T;
    while (T--)solve();
    return 0;
}