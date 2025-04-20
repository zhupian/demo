#include <bits/stdc++.h>
using namespace std;
const int N = 1010;
char a[N], b[N];
int fn[N][N];
int n, m;
int main()
{
    cin >> n >> m >> a + 1 >> b + 1;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
        {
            fn[i][j] = max(fn[i - 1][j], fn[i][j - 1]);
            if (a[i] == b[j])
                fn[i][j] = max(fn[i][j], fn[i - 1][j - 1] + 1);
        }
    cout << fn[n][m];
    return 0;
}