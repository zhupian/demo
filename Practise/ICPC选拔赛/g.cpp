#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 200;
vector<vector<int>> arr(N, vector<int>(N, 0));
vector<int> ans;
vector<vector<bool>> ok(N, vector<bool>(N, false));
int n, m;

int dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};

int dx[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
int sum = 1;

void dfs(int i, int j)
{
    ok[i][j] = true;
    for (int k = 0; k < 8; k++)
    {
        int y = dy[k] + j;
        int x = dx[k] + i;
        if (x >= 1 && x <= m && y >= 1 && y <= n && (!ok[x][y]) && arr[x][y] == 0)
        {
            sum += 1;
            //	cout << x << ' ' << y << ' ' << sum << endl;
            dfs(x, y);
        }
    }
    return;
}

int main()
{

    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (!ok[i][j] && arr[i][j] == 0)
            {
                // cout << i << ' ' << j << "sdfs" << endl;
                sum = 1;
                dfs(i, j);
                // cout << sum << endl;
                ans.push_back(sum);
            }
        }
    }
    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];
        if (i != ans.size() - 1)
            cout << ' ';
    }

    return 0;
}