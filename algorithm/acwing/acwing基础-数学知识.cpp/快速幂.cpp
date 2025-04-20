#include <bits/stdc++.h>
using namespace std;
void fn(int a, int b, int p)
{
    long long res = 1;
    while (b)
    {
        if (b & 1)
            res = res * a % p;
        b >>= 1;
        a = (long long)a * a % p;
    }
    cout << res;
}
int main()
{
    int a, b, p;
    cin >> a >> b >> p;
    fn(a, b, p);
    return 0;
}