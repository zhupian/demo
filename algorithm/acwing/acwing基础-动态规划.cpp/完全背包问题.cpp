// https://www.acwing.com/problem/content/3/
#include <iostream>
#include <algorithm>
using namespace std;
const int N = 1010;
int v[N], w[N];
int n, m;
// int fn[N][N];
// int main()
// {
// 	cin >> n >> m;
// 	for (int i = 1; i <= n; i++) cin >> v[i] >> w[i];
// 	for (int i = 1; i <= n; i++)
// 		for (int j = 0; j <= m; j++)
// 		{
// 			fn[i][j] = fn[i - 1][j];
// 			if (j >= v[i]) fn[i][j] = max(fn[i - 1][j], fn[i][j - v[i]] + w[i]);
// 		}
// 	cout << fn[n][m];
// 	return 0;
// }
int fn[N];
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> v[i] >> w[i];
    for (int i = 1; i <= n; i++)
        for (int j = v[i]; j <= m; j++)
            fn[j] = max(fn[j], fn[j - v[i]] + w[i]);
    cout << fn[m];
    return 0;
}
