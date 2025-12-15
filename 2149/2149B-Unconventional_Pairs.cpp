#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, ans = INT_MIN; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);
        for(int i = 1; i < n; i+=2) ans = max(ans, a[i] - a[i - 1]);
        cout << ans << "\n";
    }
}
