#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, occurences[26] = {0}; cin >> n;
        vector<char> d(26, 'a');
        for(int i = 0; i < 26; i++) d[i] += i;
        string s = "", a = "";
        for(int i = 0; i < n; i++){
            char c; cin >> c;
            s += c;
            if(!occurences[c - 'a']++) a += c;
        }
        sort(a.begin(), a.end());
        for(int i = 0; i < a.size(); i++){
            d[a[i] - 'a'] = a[a.size() - 1 - i];
        }
        for(int i = 0; i < s.size(); i++) cout << d[s[i] - 'a'];
        cout << "\n";
    }
}
