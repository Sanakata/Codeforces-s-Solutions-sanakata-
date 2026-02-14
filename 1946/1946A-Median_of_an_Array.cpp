#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, ans = 1; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);
        for(int i = n / 2 + n % 2; i < n; i++){
            if(a[n / 2 + n % 2 - 1] == a[i]) ans++;
            else break;
        }
        cout << ans << "\n";
    }
}
