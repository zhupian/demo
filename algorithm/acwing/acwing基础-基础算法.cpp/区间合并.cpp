#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 20;
vector<pair<int, int>> arr, res;
void fn()
{
    sort(arr.begin(), arr.end());
    int start = -2e9, end = -2e9;
    for (auto x : arr)
    {
        if (end < x.first)
        {
            if (start != -2e9)
                res.push_back({start, end});
            start = x.first, end = x.second;
        }
        else
        {
            end = max(end, x.second);
        }
    }
    if (start != -2e9)
        res.push_back({start, end});
    arr = res;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        arr.push_back({l, r});
    }
    fn();
    cout << arr.size();
    // for (auto x : res)
    // {
    //     cout << x.first << ' ' << x.second << endl;
    // }
    return 0;
}