#include <bits/stdc++.h>
using namespace std;
const int N = 100010;
int dis[N];
bool str[N];
int n, m;
int h[N], ne[N], e[N], w[N], idx;
void fn(int a, int b, int c)
{
    e[idx] = b;
    w[idx] = c;
    ne[idx] = h[a];
    h[a] = idx++;
}
int spfa()
{
    dis[1] = 0;
    str[1] = true;
    queue<int> q;
    q.push(1);
    while (q.size())
    {
        int t = q.front();
        q.pop();
        str[t] = false;
        for (int i = h[t]; i != -1; i = ne[i])
        {
            int j = e[i];
            if (dis[j] > w[i] + dis[t])
            {
                dis[j] = dis[t] + w[i];
                if (!str[j])
                {
                    str[j] = true;
                    q.push(j);
                }
            }
        }
    }
    return dis[n];
}
int main()
{
    memset(h, -1, sizeof h);
    memset(dis, 0x3f, sizeof(dis));
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        fn(a, b, c);
    }
    int t = spfa();
    if (t == 0x3f3f3f3f)
        cout << "impossible";
    else
        cout << t;
    return 0;
}