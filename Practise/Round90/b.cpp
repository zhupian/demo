#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int x = count(s.begin(), s.end(), '5');
    if (x == 0 || x == n)
    {
        cout << 0 << endl;
        return 0;
    }
    int l = 0;
    for (int i = 0; i < x; ++i)
    {
        if (s[i] == '2')
        {
            l++;
        }
    }
    cout << l << endl;
    return 0;
}