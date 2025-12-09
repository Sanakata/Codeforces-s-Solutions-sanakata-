#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, f = 0, s, p = -1; cin >> n;
        for(int i = 0; i < n; i++){
            int a; cin >> a;
            if(p > a) f = p, s = a;
            p = a;
        }
        cout << (f ? "YES\n2\n" + to_string(f) + " " + to_string(s) : "NO") << "\n";
    }
}
