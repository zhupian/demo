// https://www.acwing.com/problem/content/2/
#include <bits/stdc++.h>
using namespace std;
const int N = 1010;
int v[N], w[N];
int m, n;
int fn[N][N]; // 二维数组实现
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> v[i] >> w[i];
    for (int i = 1; i <= n; i++)
        for (int j = 0; j <= m; j++)
        {
            fn[i][j] = fn[i - 1][j];
            if (j >= v[i])
                fn[i][j] = max(fn[i][j], fn[i - 1][j - v[i]] + w[i]);
        }
    cout << fn[n][m];
    return 0;
}
// int fn[N];    //一维数组实现
// int main()
// {
//     cin >> n >> m;
//     for (int i = 1; i <= n; i++) cin >> v[i] >> w[i];
//     for (int i = 1; i <= n; i++)
//         for (int j = m; j >= v[i]; j--)
//             fn[j] = max(fn[j], fn[j - v[i]] + w[i]);
//     cout << fn[m];
//     return 0;
// }