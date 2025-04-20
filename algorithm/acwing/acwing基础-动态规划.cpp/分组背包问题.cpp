// https://www.acwing.com/problem/content/9/
#include <bits/stdc++.h>
using namespace std;
const int N = 110;
int v[N][N], w[N][N], n, s[N], m, fn[N];
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> s[i];
        for (int j = 0; j < s[i]; j++)
            cin >> v[i][j] >> w[i][j];
    }
    for (int i = 1; i <= n; i++)
        for (int j = m; j >= 0; j--)
            for (int k = 0; k < s[i]; k++)
            {
                if (v[i][k] <= j)
                    fn[j] = max(fn[j], fn[j - v[i][k]] + w[i][k]);
            }
    cout << fn[m];
    return 0;
}