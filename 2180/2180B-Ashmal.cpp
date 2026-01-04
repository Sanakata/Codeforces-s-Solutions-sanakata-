#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string ans = "";
        for(int i = 0; i < n; i++){
            string s, a, b; cin >> s;
            a = ans + s, b = s + ans;
            ans = (a > b ? b : a);
        }
        cout << ans << "\n";
    }
}
