#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int x[n];
        for(int i = 0; i < n; i++) cin >> x[i];
        cout << (n == 2 && x[1] - x[0] > 1 ? "YES" : "NO") << "\n";
    }
}
