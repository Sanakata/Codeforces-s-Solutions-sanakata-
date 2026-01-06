#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int i = 0, j = 0;
    string s, t; cin >> s >> t;
    for(; i < s.size() && j < t.size(); j++){
        if(s[i] == t[j]) i++;
    }
    cout << i + 1 << "\n";
}
