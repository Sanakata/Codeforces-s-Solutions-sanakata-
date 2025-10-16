#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        if((n % 3 != 0) ? (n < 7) : (n < 12)) cout << "NO\n";
        else cout << "YES\n" << (n % 3 == 0 ? "1 4 " + to_string(n - 5) : "1 2 " + to_string(n - 3)) << "\n";
    }
}
