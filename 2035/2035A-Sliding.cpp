#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, m, r, c; cin >> n >> m >> r >> c;
        cout << (long long) (n - r) * (m + m - 1) + m - c << "\n";
    }
}
