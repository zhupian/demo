#include <bits/stdc++.h>
using namespace std ;

void solve() {
    int n , ans = 0 ; cin >> n ;
    vector <int> a(n) ;
    for (int &x : a ) cin >> x ;
    set <int> cur, seen ;
    for (int i = 0; i < n ; i++) {
        cur.insert(a[i]) ;
        seen.insert(a[i]) ;
        if (cur.size() == seen.size()) {
            ans++ ;
            seen.clear() ;
        }
    }
    cout << ans << "\n" ;
}

int main() {
    int t ; cin >> t ;
    while (t--) solve() ;
}
