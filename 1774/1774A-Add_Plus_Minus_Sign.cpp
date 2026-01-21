#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, curr = 0; cin >> n;
        for(int i = 0; i < n; i++){
            char c; cin >> c;
            if(i > 0){
                cout << (curr && c == '1' ? '-' : '+');
                if (c == '1') curr = !curr;
            }else curr += c - '0';
        }
        cout << "\n";
    }
}
