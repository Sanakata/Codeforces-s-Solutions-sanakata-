#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, a, b; cin >> n >> a >> b;
        cout << (abs(a - b) % 2 ? "NO" : "YES") << "\n";
    }
}
