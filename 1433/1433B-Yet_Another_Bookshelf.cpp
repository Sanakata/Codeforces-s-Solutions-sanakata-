#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, ans = 0, cZ = 0; cin >> n;
        bool fO = false;
        for(int i = 0; i < n; i++){
            int a; cin >> a;
            if(!fO && a) fO = true;
            if(fO){
                if(!a) cZ++;
                else ans += cZ, cZ = 0;
            }
        }
        cout << ans << "\n";
    }
}
