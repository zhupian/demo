#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int res = 0;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        res ^= x;
    }
    if (res)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}