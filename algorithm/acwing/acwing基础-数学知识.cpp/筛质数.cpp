#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 20;
int primes[N], k;
bool str[N];

void fn(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (!str[i])
            primes[k++] = i;
        for (int j = 0; primes[j] <= n / i; j++)
        {
            str[primes[j] * i] = true;
            if (i % primes[j] == 0)
                break;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    fn(n);
    cout << k;
    return 0;
}