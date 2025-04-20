// https://www.acwing.com/problem/content/5/
#include <bits/stdc++.h>
using namespace std;
const int N = 25000;
int n, m, v[N], w[N], cnt = 0, fn[N];
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        int k = 1;
        int a, b, s;
        cin >> a >> b >> s;
        while (k <= s)
        {
            cnt += 1;
            v[cnt] = a * k;
            w[cnt] = b * k;
            s -= k;
            k *= 2;
        }
        if (s > 0)
        {
            cnt += 1;
            v[cnt] = s * a;
            w[cnt] = s * b;
        }
    }
    n = cnt;
    for (int i = 1; i <= n; i++)
        for (int j = m; j >= v[i]; j--)
        {
            fn[j] = max(fn[j], fn[j - v[i]] + w[i]);
        }
    cout << fn[m];
    return 0;
}