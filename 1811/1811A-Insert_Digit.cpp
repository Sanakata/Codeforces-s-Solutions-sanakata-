#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, d, f = 0; cin >> n >> d;
        string s; cin >> s;
        for(int i = 0; i < n; i++){
            if(!f && (s[i] - '0') < d){
                f = 1;
                cout << d;
            }
            cout << s[i];
        }
        if(!f) cout << d;
        cout << "\n";
    }
}
