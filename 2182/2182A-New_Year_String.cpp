#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        bool f6 = false, f5 = true;
        for(int i = 0; i <= n - 4; i++){
            if(s.substr(i, 4) == "2026"){
                f6 = true;
                break;
            }
            if(s.substr(i, 4) == "2025") f5 = false;
        }
        cout << (f6 || f5 ? 0 : 1) << "\n";
    }
}
