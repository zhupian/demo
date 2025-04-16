#include <bits/stdc++.h>
using namespace std;
// 马拉车算法
int main()
{
    string s;
    cin >> s;
    int c = 0, k = 0, ma = 0, r = 0;
    string t = "@#";
    for (auto c : s)
    {
        t += c;
        t += "#";
    }
    t += "!";
    int n = t.size();
    vector<int> fn(n, 0);
    for (int i = 1; i < n; i++)
    {
        fn[i] = (i <= r) ? min(fn[2 * c - i], r - i + 1) : 1;
        // 这里fn[2*c-i]好理解 取min实际是怕fn[i]的长度超过fn[c]的范围,所以最大为r-i+1;
        while (t[i - fn[i]] == t[i + fn[i]])
        {
            ++fn[i];
        }
        if (fn[i] + i - 1 > r)
        {
            r = fn[i] + i - 1;
            c = i;
        }
        if (fn[i] > ma)
        {
            ma = fn[i];
            k = i;
        }
    }
    string ans;
    for (int i = k - ma + 1; i <= k + ma - 1; i++)
    {
        if (t[i] != '#')
            ans += t[i];
    }
    cout << ans;
    return 0;
}