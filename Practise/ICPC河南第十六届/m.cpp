#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using i64 = long long;
using u64 = unsigned long long;
void solve() {
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    string s;
    cin >> n >> s;
    if (s == "MB") {
        cout << n * 1000 << " " << "KB";
    } else {
        cout << n * 1024 << " " << "KiB";
    }
    return 0;
}

