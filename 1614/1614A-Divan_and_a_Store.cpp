#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, l, r, k, ans = 0; cin >> n >> l >> r >> k;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);
        for(int i = 0; i < n; i++){
            if(a[i] > k) break;
            if(a[i] >= l && a[i] <= r) ans++, k -= a[i];
        }
        cout << ans << "\n";
    }
}
