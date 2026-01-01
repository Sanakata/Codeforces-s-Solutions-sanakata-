#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, k, ans = 0, hoursAwake = 0; cin >> n >> k;
        for(int i = 0; i < n; i++){
            char c; cin >> c;
            if(!hoursAwake && c == '0') ans++;
            else if(c == '1') hoursAwake = k + 1;
            if(hoursAwake) hoursAwake--;
        }
        cout << ans << "\n";
    }
}
