#include <bits/stdc++.h>
using namespace std;
const int N = 3e5 + 20;
int a[N], sum[N];
int m, n;
vector<int> alls;
vector<pair<int, int>> add, query;
int fn(int x)
{
    int l = 0, r = alls.size() - 1;
    while (l < r)
    {
        int mid = l + r >> 1;
        if (alls[mid] >= x)
            r = mid;
        else
            l = mid + 1;
    }
    return r + 1;
}
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int x, c;
        cin >> x >> c;
        add.push_back({x, c});
        alls.push_back(x);
    }
    for (int i = 0; i < m; i++)
    {
        int l, r;
        cin >> l >> r;
        alls.push_back(l);
        alls.push_back(r);
        query.push_back({l, r});
    }
    sort(alls.begin(), alls.end());
    alls.erase(unique(alls.begin(), alls.end()), alls.end());
    for (auto item : add)
    {
        int x = fn(item.first);
        a[x] += item.second;
    }
    for (int i = 1; i <= alls.size(); i++)
        sum[i] = sum[i - 1] + a[i];
    for (auto item : query)
    {
        int l = fn(item.first), r = fn(item.second);
        cout << sum[r] - sum[l - 1] << endl;
    }
    return 0;
}