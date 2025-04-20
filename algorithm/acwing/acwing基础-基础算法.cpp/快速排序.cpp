#include <bits/stdc++.h>
using namespace std;
// memory 1/22+1
// https://www.acwing.com/problem/content/787/
void quick(int arr[], int l, int r)
{
    if (l == r)
        return;
    int i = l - 1, j = r + 1, x = arr[l + r >> 1];
    while (i < j)
    {
        do
            i++;
        while (arr[i] < x);
        do
            j--;
        while (arr[j] > x);
        if (i < j)
            swap(arr[i], arr[j]);
    }
    quick(arr, l, j);
    quick(arr, j + 1, r);
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    quick(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
        cout << arr[i] << ' ';
    return 0;
}