#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int x, y, u = 0, d = 0, l = 0, r = 0; cin >> x >> y;
        string s; cin >> s;
        for(char& c : s){
            if(c == 'U') u++;
            else if(c == 'D') d++;
            else if(c == 'L') l++;
            else if(c == 'R') r++;
        }
        cout << (((x > 0 ? r >= x : l >= x * -1) && (y > 0 ? u >= y : d >= y * -1)) ? "YES" : "NO") << "\n";
    }
}
