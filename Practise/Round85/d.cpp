#include <bits/stdc++.h>
using namespace std;
const int N = 1e9 + 10;
void fn()
{
}
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0;
    int oe = 0, oo = 0, ee = 0, eo = 0;
    int odd = 0, ever = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
            ever += 1;
        else
            odd += 1;
        if (ever % 2 == 0 && odd % 2 == 0)
            ee = max(ee, i);
        else if (ever % 2 == 1 && odd % 2 == 0)
            oe = max(oe, i);
        else if (ever % 2 == 0 && odd % 2 == 1)
            eo = max(eo, i);
        else
            oo = max(oo, i);
    }
    odd = 0, ever = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
            ever += 1;
        else
            odd += 1;
        if (ever % 2 == 0 && odd % 2 == 0 && ee > i)
            ans += 1;
        else if (ever % 2 == 1 && odd % 2 == 0 && oe > i)
            ans += 1;
        else if (ever % 2 == 0 && odd % 2 == 1 && eo > i)
            ans += 1;
        else if (ever % 2 == 1 && odd % 2 == 1 && oo > i)
            ans += 1;
    }
    long double x = 1.0 * ans / n;
    cout << x;
    return 0;
}