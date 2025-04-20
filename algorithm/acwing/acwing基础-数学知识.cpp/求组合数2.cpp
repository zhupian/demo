#include <bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
const int N = 1e5 + 10;
int fact[N], infact[N];
int quick(int a, int b, int p)
{
    long long res = 1;
    while (b)
    {
        if (b & 1)
            res = (1LL * res * a) % p;
        b >>= 1;
        a = (1LL * a * a) % p;
    }
    return res;
}
void init()
{
    fact[0] = infact[0] = 1;
    for (int i = 1; i < N; i++)
    {
        fact[i] = (1LL * fact[i - 1] * i) % M;
        infact[i] = (1ll * infact[i - 1] * quick(i, M - 2, M) % M);
    }
    return;
}
int main()
{
    int n;
    cin >> n;
    init();
    for (int i = 1; i <= n; i++)
    {
        int a, b;
        cin >> a >> b;

        cout << 1LL * fact[a] * infact[b] % M * infact[a - b] % M << endl;
    }
    return 0;
}