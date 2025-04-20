#include <bits/stdc++.h>
using namespace std;
const int N = 1010;
int fn[N], an[N];
int n;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> an[i];
    for (int i = 1; i <= n; i++)
    {
        fn[i] = 1;
        for (int j = 1; j < i; j++)
            if (an[j] < an[i])
                fn[i] = max(fn[i], fn[j] + 1);
    }
    int res = 0;
    for (int i = 1; i <= n; i++)
        res = max(res, fn[i]);
    cout << res;
    return 0;
}