#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
using LL = long long;

int main() {

#ifdef LOCAL
	freopen("data.in", "r", stdin);
	freopen("data.out", "w", stdout);
#endif

	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(0);
	//不管啦 copy
	int T;
	cin >> T;
	while (T--) {
		string s[3];
		cin >> s[0] >> s[1] >> s[2];

		auto check = [&]() {
			// 行
			for (int i = 0; i < 3; i++) {
				int cnt1 = 0, cnt2 = 0;
				for (int j = 0; j < 3; j++) {
					if (s[i][j] == 'X') cnt1 += 1;
					if (s[i][j] == 'O') cnt2 += 1;
				}
				if (cnt1 >= 2 and cnt2 == 0) return 1;
				if (cnt2 == 3) return -1;
			}
			// 列
			for (int i = 0; i < 3; i++) {
				int cnt1 = 0, cnt2 = 0;
				for (int j = 0; j < 3; j++) {
					if (s[j][i] == 'X') cnt1 += 1;
					if (s[j][i] == 'O') cnt2 += 1;
				}
				if (cnt1 >= 2 and cnt2 == 0) return 1;
				if (cnt2 == 3) return -1;
			}
			// 主
			{
				int cnt1 = 0, cnt2 = 0;
				for (int j = 0; j < 3; j++) {
					if (s[j][j] == 'X') cnt1 += 1;
					if (s[j][j] == 'O') cnt2 += 1;
				}
				if (cnt1 >= 2 and cnt2 == 0) return 1;
				if (cnt2 == 3) return -1;
			}
			// 副
			{
				int cnt1 = 0, cnt2 = 0;
				for (int j = 0; j < 3; j++) {
					if (s[j][2 - j] == 'X') cnt1 += 1;
					if (s[j][2 - j] == 'O') cnt2 += 1;
				}
				if (cnt1 >= 2 and cnt2 == 0) return 1;
				if (cnt2 == 3) return -1;
			}
			return 0;
		};

		auto dfs = [&](auto && dfs, int u) -> bool {
			int t = check();
			if (u % 2 == 0) {
				if (t == 1) return true;
				if (t == -1) return false;
				for (int i = 0; i < 3; i++) {
					for (int j = 0; j < 3; j++) {
						if (s[i][j] == 'G') {
							s[i][j] = 'X';
							if (!dfs(dfs, u + 1)) {
								s[i][j] = 'G';
								return true;
							}
							s[i][j] = 'G';
						}
					}
				}
				return false;
			}
			else{
				if (t == -1) return true;
				if (t == 1) return false;
				int cnt = 0;
				for (int i = 0; i < 3; i++) {
					for (int j = 0; j < 3; j++) {
						if (s[i][j] == 'G') {
							cnt += 1;
							s[i][j] = 'O';
							if (!dfs(dfs, u + 1)) {
								s[i][j] = 'G';
								return true;
							}
							s[i][j] = 'G';
						}
					}
				}
				return cnt == 0;
			}
		};

		cout << (dfs(dfs, 0) ? "Yes" : "No") << '\n';

	}

}