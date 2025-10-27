#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int ans = 1, tr = 0;
        string s; cin >> s;
        vector<int> def(26, 0), cur(26, 0);
        for(char& c : s){
            if(!cur[c - 'a']) tr++, cur[c - 'a']++;
            if(tr > 3) ans++, tr = 1, cur = def, cur[c - 'a']++;
        }
        cout << ans << "\n";
    }
}
