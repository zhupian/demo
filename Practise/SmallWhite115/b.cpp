#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, t = 1, ma1 = 0;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] == v[i + 1])
            t++;
        else
        {
            if (t > ma1 && t + n - 1 - i >= m)
                ma1 = t;
            t = 1;
        }
    }
    if (t > ma1 && t >= m)
        ma1 = t;
    cout << min(m, ma1);
}