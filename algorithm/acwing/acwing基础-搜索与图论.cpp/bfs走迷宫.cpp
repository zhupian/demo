#include <bits/stdc++.h>
using namespace std;
// memory 1/23+3
// https://www.acwing.com/problem/content/846/
#define int long long
const int N = 110;
int des[N][N], g[N][N];
typedef pair<int, int> pii;
int n, m;
int bfs()
{
	queue<pii> q;
	q.push({1, 1});
	memset(des, -1, sizeof des);
	des[1][1] = 0;
	int dx[4] = {0, 1, 0, -1};
	int dy[4] = {1, 0, -1, 0};
	while (q.size())
	{
		auto t = q.front();
		q.pop();
		for (int i = 0; i < 4; i++)
		{
			int x = dx[i] + t.first;
			int y = dy[i] + t.second;
			if (x >= 1 && x <= n && y >= 1 && y <= m && des[x][y] == -1 && g[x][y] == 0)
			{
				des[x][y] = des[t.first][t.second] + 1;
				q.push({x, y});
			}
		}
	}
	return des[n][m];
}
signed main()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
			cin >> g[i][j];
	}
	cout << bfs();
	return 0;
}