#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int ans = 0;
        string s; cin >> s;
        ans += ((s[0] - '1') * 10);
        ans += (s.size() * (s.size() + 1) / 2);
        cout << ans << "\n";
    }
}
