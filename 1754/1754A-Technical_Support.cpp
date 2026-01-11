#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, q = 0; cin >> n;
        string s; cin >> s;
        for(const auto& c : s){
            if(c == 'Q') q++;
            else if(q) q--;
        }
        cout << (q ? "No" : "Yes") << "\n";
    }
}
