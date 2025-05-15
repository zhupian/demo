#include <bits/stdc++.h>
using namespace std;
void fn()
{
    int n, j = 0;
    cin >> n;
    string s = "CHICKEN";
    vector<char> res(n + 1);
    unordered_map<char, int> mp;
    bool ok = false, ok2 = false;
    for (int i = 1; i <= n; i++)
    {
        cin >> res[i];
        mp[res[i]]++;
    }
    for (int i = 1; i <= n; i++)
    {
        if (res[i] == s[j]) j += 1;
        if (j == 7) break;
    }
    if (j == 7) ok2 = true;
    if (mp['C'] - 2 >= 0 && mp['I'] - 1 >= 0 && mp['H'] - 1 >= 0 && mp['K'] - 1 >= 0 && mp['E'] - 1 >= 0 && mp['N'] - 1 >= 0)
        ok = true;
    mp['C'] -= 2;
    mp['I'] -= 1;
    mp['H'] -= 1;
    mp['K'] -= 1;
    mp['E'] -= 1;
    mp['N'] -= 1;
    int f = 0;
    for (auto &[x, y] : mp)
    {
        f = max(f, y);
    }
    if (n % 2 == 0 || !ok || (f > (n - 7) / 2) || !ok2)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}
int main()
{
    int t;
    cin >> t;
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    while (t--)
    {
        fn();
    }
    return 0;
}