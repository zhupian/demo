#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    unordered_map<string, int> mp;
    int ma = 0, len = 0;
    string ans;
    for (int i = 1; i <= n; i++)
    {
        string s;
        cin >> s;
        string t;
        for (int j = 0; j < s.size(); j++)
        {
            t += s[j];
            mp[t] += 1;
        }
    }
    for (auto &[x, y] : mp)
    {
        if (y == n)
        {
            if (x.size() > ma)
            {
                ma = x.size();
                ans = x;
            }
        }
    }
    if (ma > 0)
        cout << ans;
    else
        cout << "NO";
    return 0;
}