#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        vector<int> occurences(3, 0);
        for(const auto& c : s) occurences[c - 'A']++;
        cout << (occurences[0] + occurences[2] == occurences[1] ? "YES" : "NO") << "\n";
    }
}
