#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int k = 0;
    string s;
    cin >> s;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
            k += 1;
    }
    cout << (k <= 1 ? "YES" : "NO");
    return 0;
}