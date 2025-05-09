#include <bits/stdc++.h>
using namespace std;
const int N = 110;
char arr[N][N];
void fn()
{
}
int main()
{
    int n, m;
    cin >> n >> m;
    int t = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == '0')
                t += 1;
        }
    }
    if (t % 2 == 1)
    {
        cout << -1;
        return 0;
    }
    vector<array<int, 4>> ans;
    int k = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            char a = arr[i][j], b = arr[i][j + 1];
            if (a == '1' && b == '1')
                continue;
            else if (a == '0' && b == '0')
            {
                ans.emplace_back(array<int, 4>{i, j, i, j + 1});
                k += 1;
            }
            else if (a == '0' && b == '1')
            {
                ans.emplace_back(array<int, 4>{i, j, i, j + 1});
                k += 1;
                arr[i][j] = '1';
                arr[i][j + 1] = '0';
            }
        }
    }
    for (int i = 1; i < n; i++)
    {
        char a = arr[i][m], b = arr[i + 1][m];
        if (a == '1' && b == '1')
            continue;
        else if (a == '0' && b == '0')
        {
            ans.emplace_back(array<int, 4>{i, m, i + 1, m});
            k += 1;
        }
        else if (a == '0' && b == '1')
        {
            ans.emplace_back(array<int, 4>{i, m, i + 1, m});
            k += 1;
            arr[i][m] = '1';
            arr[i + 1][m] = '0';
        }
    }
    cout << k << endl;
    for (auto f : ans)
    {
        cout << f[0] << ' ' << f[1] << ' ' << f[2] << ' ' << f[3] << endl;
    }
    return 0;
}