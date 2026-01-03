#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, ans = 0, mx = INT_MIN; cin >> n;
        for(int i = 0; i < n; i++){
            int a; cin >> a;
            if(mx > a) ans++; 
            mx = max(mx, a);
        }
        cout << ans << "\n";
    }
}
