#include <bits/stdc++.h>
using namespace std;
const int N = 2010;
const int M = 1e9 + 7;
int arr[N][N];
void init()
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (!j)
                arr[i][j] = 1;
            else
                arr[i][j] = (arr[i - 1][j] + arr[i - 1][j - 1]) % M;
        }
    }
    return;
}
int main()
{
    init();
    int n;
    cin >> n;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        cout << arr[a][b] << endl;
    }
    return 0;
}