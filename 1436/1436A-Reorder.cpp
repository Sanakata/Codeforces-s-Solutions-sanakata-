#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, m, aS = 0; cin >> n >> m;
        for(int i = 0; i < n; i++){
            int a; cin >> a;
            aS += a;
        }
        cout << (aS == m ? "YES" : "NO") << "\n";
    }
}1
