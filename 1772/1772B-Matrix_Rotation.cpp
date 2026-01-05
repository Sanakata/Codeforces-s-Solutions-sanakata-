#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int x[2], y[2], mx = INT_MIN, mn = INT_MAX;
        for(int i = 0; i < 2; i++){
            for(int j = 0; j < 2; j++){
                int a; cin >> a;
                if(mx < a) mx = a, x[1] = j, y[1] = i;
                if(mn > a) mn = a, x[0] = j, y[0] = i;
            }
        }
        cout << (x[0] != x[1] && y[0] != y[1] ? "YES" : "NO") << "\n";
    }
}
