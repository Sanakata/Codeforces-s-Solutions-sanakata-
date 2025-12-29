#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n, greater<int>());
        long double ans = a[0] + ((long double) accumulate(a + 1, a + n, 0LL) / (n - 1));
        cout << fixed << setprecision(9);
        cout << ans << "\n";
    }
}
