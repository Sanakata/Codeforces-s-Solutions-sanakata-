#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, c1 = 0, ans = 0; cin >> n;
        char s[n], sT[n];
        for(int i = 0; i < n; i++){
            cin >> s[i];
            if(s[i] == '1') c1++; 
        }
        sT[n] = s[n], sort(sT, sT + n);
        for(int i = n - c1; i < n; i++) if(s[i] != '1') ans++;
        cout << ans << "\n";
    }
}
