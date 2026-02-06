#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, s, x, nSum = 0; cin >> n >> s >> x;
        for(int i = 0; i < n; i++){
            int a; cin >> a;
            nSum += a;
        }
        cout << (nSum <= s && (nSum == s || (s - nSum) % x == 0) ? "YES" : "NO") << "\n";
    }
}
