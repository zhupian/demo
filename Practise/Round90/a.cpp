#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    n %= 5;
    if (n == 0)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}