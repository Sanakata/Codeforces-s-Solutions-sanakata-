#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    unordered_map<string, bool> is_present;
    while(t--){
        string s; cin >> s;
        if(!is_present[s]){
            cout << "NO\n";
            is_present[s] = true;
        }else cout << "YES\n";
    }
}
