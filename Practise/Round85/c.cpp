#include <bits/stdc++.h>
using namespace std;
const int N = 1e9 + 10;
void fn()
{
    string s;
    cin >> s;
    vector<int> cnt;
    vector<char> c;
    int k = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (k == 0 || s[i] == s[i - 1])
        {
            k += 1;
        }
        else
        {
            cnt.push_back(k);
            c.push_back(s[i]);
            k = 0;
        }
    }
    cnt.push_back(k);
    c.push_back(s[s.size() - 1]);
    if (c.size() <= 5)
        cout << "Yes";
    else
        cout << "No";
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        fn();
    }
    return 0;
}