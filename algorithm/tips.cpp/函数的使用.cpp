#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> res(n, 0);
    for (int i = 0; i < n; i++)
        cin >> res[i];
    int x;
    cin >> x;
    int i = lower_bound(res.begin(), res.end(), x) - res.begin();
    // i是第一个>=x的数的下标;
    int j = upper_bound(res.begin(), res.end(), x) - res.begin();
    // j是第一个>x的数的下标;
    priority_queue<int, vector<int>, less<int>> q1;
    // 大顶堆  即从大到小排列和 priority<int> q1相同;
    priority_queue<int, vector<int>, greater<int>> q2;
    // 小顶堆;
    int a[3] = {0, 1, 2};
    do
    {
        cout << a[0] << ' ' << a[1] << ' ' << a[2] << endl;
    } while (next_permutation(a, a + 3));
}