#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, res;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        res = x;
        for (int j = 2; j <= x / j; j++)
        {
            if (x % j == 0)
            {
                res = res / j * (j - 1);
                while (x % j == 0)
                    x /= j;
            }
        }
        if (x > 1)
            res = res / x * (x - 1);
        cout << res << endl;
    }
    return 0;
}