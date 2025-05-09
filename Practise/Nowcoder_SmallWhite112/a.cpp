#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int a, b, w;
    cin >> a >> b >> w;
    vector<int> arr(3, 0);
    arr[0] = a;
    arr[1] = b;
    arr[2] = w;
    sort(arr.begin(), arr.end());
    if (a == w || b == w || arr[0] + arr[1] == arr[2])
        cout << "Yes";
    else
        cout << "No";
    return 0;
}