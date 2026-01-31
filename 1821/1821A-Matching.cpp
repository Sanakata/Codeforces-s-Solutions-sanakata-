#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int ans = 1;
        if(s[0] == '0') cout << "0\n";
        else{
            for(int i = 0; i < s.size(); i++) if(s[i] == '?') ans *= (i == 0 ? 9 : 10);
            cout << ans << "\n";
        }
    }
}
