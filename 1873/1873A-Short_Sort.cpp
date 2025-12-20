#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int countWrongPositions = 0;
        string s, abc = "abc"; cin >> s;
        for(int i = 0; i < 3; i++) if(s[i] != abc[i]) countWrongPositions++;
        cout << (countWrongPositions <= 2 ? "YES" : "NO") << "\n";
    }
}
