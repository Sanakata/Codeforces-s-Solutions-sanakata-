#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, ans = 1; cin >> n;
        vector<int> a(26, -1);
        for(int i = 0; i < n; i++){
            char c; cin >> c;
            if(a[c - 'a'] == -1) a[c - 'a'] = i % 2;
            else if(a[c - 'a'] != i % 2) ans = 0; 
        }
        cout << (ans ? "YES" : "NO") << "\n";
    }
}
