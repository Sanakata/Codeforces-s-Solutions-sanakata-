#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, ans = 0; cin >> n;
        string s; cin >> s;
        char c = '0';
        for(int i = 0; i < n; i++){
            if(c != s[i]){
                if(c == '0') ans += 2, c = '1';
                else c = '0';
            }
        }
        cout << ans - (c == '1' ? 1 : 0) << "\n";
    }
}
