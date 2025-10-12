#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, ans = -1; cin >> n;
        char s[n];
        for(int i = 0; i < n; i++){
            cin >> s[i];
            if(i > 0 && s[i] != s[i - 1]) ans = i;
        }
        if(ans == -1) cout << "-1 -1\n";
        else cout << ans << " " << ans + 1 << "\n";
    }
}
