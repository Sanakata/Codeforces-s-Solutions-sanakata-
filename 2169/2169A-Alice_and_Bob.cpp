#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, a, p, s = 0; cin >> n >> a;
        p = n;
        for(int i = 0; i < n; i++){
            int v; cin >> v;
            if(p == n && v >= a) p = i;
            if(v == a) s++;
        }
        cout << ((s != 0) ? (max(p, n - p - s) > p ? ++a : --a) : (max(p, n - p) > p ? ++a : --a)) << "\n";
    }
}
