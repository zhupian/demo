#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int ans = 1;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '-')
            ans -= 1;
        else
            ans *= 2;
        if (ans >= 2025)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}