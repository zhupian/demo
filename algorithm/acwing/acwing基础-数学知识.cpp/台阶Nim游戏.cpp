#include <bits/stdc++.h>
using namespace std;
int main()
{
    int res = 0;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        if (i % 2)
            res ^= x;
    }

    if (res)
        puts("Yes");
    else
        puts("No");
    return 0;
}