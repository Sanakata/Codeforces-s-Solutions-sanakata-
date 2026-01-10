#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << (char) ('a' + min(25, max(0, n - 53))) << (char) ('a' + min(25, max(0, n - 28))) << (char) ('a' + min(25, n - 3)) << "\n";
    }
}
