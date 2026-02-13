#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        bool f = false;
        vector<bool> c(102, false);
        for(int i = 0; i < n; i++){
            int a; cin >> a;
            c[a] = true;
        }
        for(int i = 0; i < 103; i++){
            if(!c[i]){
                cout << i << "\n";
                break;
            }
        }
    }
}
