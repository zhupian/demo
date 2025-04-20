#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 20;
int arr[N], n, m;
void fn(int x)
{
    int l = 0, r = n - 1;
    while (l < r)
    {
        int mid = l + r >> 1;
        if (arr[mid] >= x)
            r = mid;
        else
            l = mid + 1;
    }
    if (arr[l] != x)
    {
        cout << -1 << ' ' << -1 << endl;
        return;
    }
    cout << l << ' ';
    l = 0, r = n - 1;
    while (l < r)
    {
        int mid = l + r + 1 >> 1;
        if (arr[mid] <= x)
            l = mid;
        else
            r = mid - 1;
    }
    cout << r << endl;
}
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    while (m--)
    {
        int x;
        cin >> x;
        fn(x);
    }
    return 0;
}