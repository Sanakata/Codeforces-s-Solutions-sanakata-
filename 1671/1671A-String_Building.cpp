#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        char prev = 'c';
        int seq = 2;
        bool ans = true;
        for(const auto& c : s){
            if(prev != c){
                if(seq < 2) ans = false;
                seq = 1, prev = c;
            }else seq++;
        }
        cout << (ans && seq > 1 ? "YES" : "NO") << "\n";
    }
}
