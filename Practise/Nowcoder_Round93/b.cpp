#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int sum = 0;
    cin >> s;
    for (int i = 0; i < s.length() - 4; i++)
    {
        string x = s.substr(i, 5);
        if (x[0] == x[2] && x[2] == x[4] && x[1] == x[3] && x[0] != x[1]) sum++;
    }
    cout << sum << endl;
    return 0;
}