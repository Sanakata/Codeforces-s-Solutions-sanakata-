#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, m, k, h, ans = 0, tmp; cin >> n >> m >> k >> h;
        for(int i = 0; i < n; i++){
            int a; cin >> a;
            tmp = abs(h - a);
            if(h != a && tmp % k == 0 && tmp / k < m) ans++;
        }
        cout << ans << "\n";
    }
}
