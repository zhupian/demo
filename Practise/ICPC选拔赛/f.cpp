#include <bits/stdc++.h>
using namespace std;
const int N = 10010;
typedef pair<int, int> pii;

int n, m, k;
vector<pii> a[N];
int st[N];
set<int> used;
vector<int> p[N];
priority_queue<int, vector<int>, greater<int>> heap;
int main()
{
    cin >> n >> m >> k;
    if (n == k)
    {
        cout << 0;
        return 0;
    }

    for (int i = 1; i <= m; i++)
    {
        int c;
        pii t;
        cin >> t.first >> t.second >> c;
        a[c].push_back(t);
        heap.push(c);
    }
    int b = n;
    int res = 0, idx = 1;
    while (heap.size())
    {
        int t = heap.top();
        heap.pop();
        if (!used.insert(t).second)
        {
            continue;
        }
        for (auto i : a[t])
        {
            int x = i.first, y = i.second;
            if (st[x] == st[y] && st[x] != 0)
            {
                continue;
            }
            else if (st[x] == 0 && st[y] == 0)
            {
                st[x] = st[y] = idx++;
                p[idx].push_back(x), p[idx].push_back(y);
                b--;
                res += t;
            }
            else if (st[x] == 0 && st[y] != 0)
            {
                st[x] = st[y];
                p[st[y]].push_back(x);
                b--;
                res += t;
            }
            else if (st[x] != 0 && st[y] == 0)
            {
                st[y] = st[x];
                p[st[x]].push_back(y);
                b--;
                res += t;
            }
            else if (st[x] != 0 && st[y] != 0 && st[x] != st[y])
            {
                for (auto j : p[st[y]])
                {
                    p[st[x]].push_back(j);
                    st[j] = st[x];
                }
                p[st[y]].clear();
                b--;
                res += t;
            }
            if (b == k)
            {
                cout << res;
                return 0;
            }
        }
    }
    cout << "No Answer";
    return 0;
}