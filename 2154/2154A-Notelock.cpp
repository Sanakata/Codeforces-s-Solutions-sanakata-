#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, k, prev_one = -1000, ans = 0; cin >> n >> k;
        for(int i = 0; i < n; i++){
            char c; cin >> c;
            if(c == '1'){
                if(i - prev_one > k - 1) ans++;
                prev_one = i;
            }
        }
        cout << ans << "\n";
    }
}
