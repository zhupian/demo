#include <bits/stdc++.h>
using namespace std;
long long fn(long long a, long long b, long long c)
{
    long long res = 0;
    while (b)
    {
        if (b & 1)
            res = (res + a) % c;
        b >>= 1;
        a = a * 2 % c;
    }
    return res;
}
int main()
{
    long long a, b, c;
    cin >> a >> b >> c;
    cout << fn(a, b, c);
    return 0;
}
