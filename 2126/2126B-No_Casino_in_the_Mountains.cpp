#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, k, c_consecutive = 0, ans = 0, is_break = 0; cin >> n >> k;
        for(int i = 0; i < n; i++){
            int a; cin >> a;
            if(!a && !is_break) c_consecutive++;
            else c_consecutive = 0;
            if(is_break) is_break = 0;
            if(c_consecutive == k) ans++, is_break = 1, c_consecutive = 0;
        }
        cout << ans << "\n";
    }
}
