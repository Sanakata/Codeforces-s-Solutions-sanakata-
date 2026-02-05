#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, mx = INT_MIN, mn = INT_MAX; cin >> n;
        for(int i = 0; i < n; i++){
            int a; cin >> a;
            mx = max(mx, a), mn = min(mn, a);
        }
        cout << (mn < 0 ? mn : mx) << "\n";
    }
}
