#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, ans = 1; cin >> n;
        int a[n];
        vector<char> c(51, ' ');
        char y;
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++){
            cin >> y;
            if(c[a[i]] == ' ') c[a[i]] = y;
            else if(c[a[i]] != y) ans = 0;
        }
        cout << (ans ? "YES" : "NO") << "\n";
    }
}
