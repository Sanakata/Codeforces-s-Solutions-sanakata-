#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, f; cin >> n;
        bool ans = true;
        for(int i = 0; i < n; i++){
            int a; cin >> a;
            if(i == 0) f = a;
            else if(a % f != 0) ans = false;
        }
        cout << (ans ? "YES" : "NO") << "\n";
    }
}
