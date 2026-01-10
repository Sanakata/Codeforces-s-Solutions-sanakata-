#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        cout << (min(n, m) == 1 || (n == m && m == 2) ? "YES" : "NO") << "\n";
    }
}
