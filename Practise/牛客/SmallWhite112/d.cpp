#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int mx = 0;
    cin >> n;
    vector<int> s(n + 1, 0);
    for (int i = 0; i < n - 1; ++i)
    {
        int u, v;
        cin >> u >> v;
        s[u]++;
        s[v]++;
        mx = max(mx, s[u]);
        mx = max(mx, s[v]);
    }
    int x = 0;
    for (int u = 1; u <= n; ++u)
    {
        if (s[u] == mx)
        {
            x++;
        }
    }
    int cnts = 0;
    for (int u = 1; u <= n; ++u)
    {
        int d = s[u];
        if (d < mx && d > cnts)
        {
            cnts = d;
        }
    }
    int kk = INT_MAX;
    int uu = -1;
    for (int u = 1; u <= n; ++u)
    {
        int sum;
        if (s[u] == mx)
        {
            sum = mx;
        }
        else
        {
            sum = max(s[u], mx - 1);
        }
        if (sum < kk || (sum == kk && u < uu))
        {
            kk = sum;
            uu = u;
        }
    }
    cout << kk << " " << uu << endl;
    return 0;
}