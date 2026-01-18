#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, ans = 0; cin >> n;
        string s, sr; cin >> s;
        sr = s, sort(sr.begin(), sr.end());
        for(int i = 0; i < n; i++){
            if(sr[i] != s[i]) ans++;
        }
        cout << ans << "\n";
    }
}
