#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        char m = ':';
        if(s.size() < 3) cout << s[s.size() - 1] << "\n";
        else{
            for(char& c : s){
                if(m > c) m = c;
                if(m == '1') break;
            }
            cout << m << "\n";
        }
    }
}
