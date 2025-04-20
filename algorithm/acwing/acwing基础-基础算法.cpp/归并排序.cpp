#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 20;
int arr[N], tem[N];
void fn(int arr[], int l, int r)
{
    if (l == r)
        return;
    int mid = l + r >> 1;
    fn(arr, l, mid);
    fn(arr, mid + 1, r);
    int k = 0, i = l, j = mid + 1;
    while (i <= mid && j <= r)
    {
        if (arr[i] <= arr[j])
            tem[k++] = arr[i++];
        else
            tem[k++] = arr[j++];
        // res+=mid-i+1;
    }
    while (i <= mid)
        tem[k++] = arr[i++];
    while (j <= r)
        tem[k++] = arr[j++];
    for (int i = l, j = 0; i <= r; i++, j++)
        arr[i] = tem[j];
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    fn(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
        cout << arr[i] << ' ';
    return 0;
}