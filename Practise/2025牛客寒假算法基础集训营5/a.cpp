#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long x; char c;
    cin >> x >> c;
    if (c == '*') cout << x << ' ' << 1;
    else if (c == '+') cout << x - 1 << ' ' << 1;
    else cout << x + 1 << ' ' << 1;
    return 0;
}