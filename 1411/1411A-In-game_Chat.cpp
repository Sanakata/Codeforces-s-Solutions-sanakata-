#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, nB = 0; cin >> n;
        string s; cin >> s;
        for(nB = n - 1; nB >= 0; nB--) if(s[nB] != ')') break;
        cout << (++nB < n - nB ? "YES" : "NO") << "\n";
    }
}
