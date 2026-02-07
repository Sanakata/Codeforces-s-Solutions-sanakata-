#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        bool ans = true;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(i > 0 && a[i - 1] % 2 == a[i] % 2) ans = false;
        }
        cout << (ans ? "YES" : "NO") << "\n";
    }
}
