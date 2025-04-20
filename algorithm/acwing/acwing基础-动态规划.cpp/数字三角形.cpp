#include <bits/stdc++.h>
using namespace std;
const int N = 510;
int fn[N][N], res[N][N], n;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= i; j++)
            cin >> res[i][j];
    memset(fn, -0x3f, sizeof(fn));
    fn[1][1] = res[1][1];
    for (int i = 2; i <= n; i++)
        for (int j = 1; j <= i; j++)
        {
            fn[i][j] = max(fn[i - 1][j - 1] + res[i][j], fn[i - 1][j] + res[i][j]);
        }
    int ma = -INT_MAX;
    for (int i = 1; i <= n; i++)
        ma = max(ma, fn[n][i]);
    cout << ma;
    return 0;
}