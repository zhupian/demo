// https://www.acwing.com/problem/content/4/
#include <bits/stdc++.h>
using namespace std;
const int N = 110;
int n, m;
int v[N], w[N], s[N];
int f[N][N];
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> v[i] >> w[i] >> s[i];
    for (int i = 1; i <= n; i++)
        for (int j = 0; j <= m; j++)
            for (int k = 0; k <= s[i] && k * v[i] <= j; k++)
                f[i][j] = max(f[i][j], f[i - 1][j - v[i] * k] + w[i] * k);
    cout << f[n][m] << endl;
    return 0;
}