#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, y, r, ans; cin >> n >> y >> r;
        ans = min(n, r + (y / 2));
        cout << ans << "\n";
    }
}
