#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        long long ans = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(i > 0 && ans < (long long) a[i - 1] * a[i]) ans = (long long) a[i - 1] * a[i];
        }
        cout << ans << "\n";
    }
}
