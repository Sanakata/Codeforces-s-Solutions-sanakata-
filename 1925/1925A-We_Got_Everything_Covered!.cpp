#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    string s = "abcdefghijklmnopqrstuvwxyz", ans;
    while(t--){
        int n, k; cin >> n >> k;
        ans = s.substr(0, k);
        for(int i = 0; i < n; i++) cout << ans;
        cout << "\n";
    }
}
