#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int ans = 0, R, X, D, n; cin >> R >> X >> D >> n;
        for(int i = 0; i < n; i++){
            char c; cin >> c;
            if(c == '2' && R < X) ans++, R -= D;
            else if(c == '1') ans++, R -= D;
        }
        cout << ans << "\n";
    }
}
