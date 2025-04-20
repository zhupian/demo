#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    // 例如10101010010;
    int val = 0;
    for (int i = 0; i < s.size(); i++)
    {
        val = (val << 1) | (s[i] - '0');
        cout << val << ' ';
    }
    return 0;
}