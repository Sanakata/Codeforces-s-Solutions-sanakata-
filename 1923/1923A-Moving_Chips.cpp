#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, p = -1, c = -1, ans = 0; cin >> n;
        for(int i = 0; i < n; i++){
            int a; cin >> a;
            if(a == 1){
                p = c;
                c = i;
                if(p != -1) ans += c - p - 1;
            }
        }
        cout << ans << "\n";
    }
}
