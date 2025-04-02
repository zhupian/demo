#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n + 1, 0);
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin() + 1, arr.end());
    for (int i = 2; i <= n; i++)
        sum += abs(arr[i] - arr[i - 1]);
    if (sum != 0)
    {
        cout << 2 << ' ' << sum;
    }
    else
    {
        cout << 1 << ' ' << 0;
    }
    return 0;
}