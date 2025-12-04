#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, f; cin >> n;
        vector<int> occurences(26, 0);
        for(int i = 0; i < n; i++){
            char c; cin >> c;
            occurences[c - 'a']++;
            if(i + 1 == n) f = occurences[c - 'a'];
        }
        cout << n - f << "\n";
    }
}
