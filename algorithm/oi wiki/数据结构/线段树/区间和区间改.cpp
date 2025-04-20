#include <bits/stdc++.h>
using namespace std;
// memory 1/23+2
//  https://www.acwing.com/problem/content/244/
#define int long long
const int N = 1e6 + 10;
int d[N], b[N], arr[N], v[N];
int n, m;
void build(int s, int t, int p)
{
  int m = s + t >> 1;
  if (s == t)
  {
    d[p] = arr[s];
    return;
  }
  build(s, m, p * 2);
  build(m + 1, t, p * 2 + 1);
  d[p] = d[p * 2] + d[p * 2 + 1];
}
void update(int l, int r, int c, int s, int t, int p)
{
  if (l <= s && t <= r)
  {
    d[p] = (t - s + 1) * c, b[p] = c, v[p] = 1;
    return;
  }
  int m = s + ((t - s) >> 1);
  if (v[p])
  {
    d[p * 2] = b[p] * (m - s + 1), d[p * 2 + 1] = b[p] * (t - m);
    b[p * 2] = b[p * 2 + 1] = b[p];
    v[p * 2] = v[p * 2 + 1] = 1;
    v[p] = 0;
  }
  if (l <= m)
    update(l, r, c, s, m, p * 2);
  if (r > m)
    update(l, r, c, m + 1, t, p * 2 + 1);
  d[p] = d[p * 2] + d[p * 2 + 1];
}

int getsum(int l, int r, int s, int t, int p)
{
  if (l <= s && t <= r)
    return d[p];
  int m = s + ((t - s) >> 1);
  if (v[p])
  {
    d[p * 2] = b[p] * (m - s + 1), d[p * 2 + 1] = b[p] * (t - m);
    b[p * 2] = b[p * 2 + 1] = b[p];
    v[p * 2] = v[p * 2 + 1] = 1;
    v[p] = 0;
  }
  int sum = 0;
  if (l <= m)
    sum = getsum(l, r, s, m, p * 2);
  if (r > m)
    sum += getsum(l, r, m + 1, t, p * 2 + 1);
  return sum;
}
signed main()
{
  cin >> n >> m;
  for (int i = 1; i <= n; i++)
    cin >> arr[i];
  build(1, n, 1);
  while (m--)
  {
    int l, r;
    char t;
    cin >> t >> l >> r;
    if (t == 'C')
    {
      int k;
      cin >> k;
      update(l, r, k, 1, n, 1);
    }
    else
    {
      cout << getsum(l, r, 1, n, 1) << endl;
    }
  }
  return 0;
}
