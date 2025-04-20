#include <bits/stdc++.h>
using namespace std;
// https://www.acwing.com/activity/content/problem/content/885/
const int N = 1e5 + 10;
int p[N];
int find(int x)
{
    if (p[x] != x)
        p[x] = find(p[x]);
    return p[x];
}
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        p[i] = i;
    while (m--)
    {
        char c;
        int a, b;
        cin >> c >> a >> b;
        if (c == 'M')
            p[find(a)] = find(b);
        else
        {
            if (find(a) == find(b))
                cout << "Yes";
            else
                cout << "No";
            cout << endl;
        }
    }
}