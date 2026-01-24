#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, ans = 0; cin >> n;
        string s; cin >> s;
        for(int i = 0; i < n; i++){
            if(s[i] != '0' && i < n - 1) ans++;
            ans += s[i] - '0';
        }
        cout << ans << "\n";
    }
}
