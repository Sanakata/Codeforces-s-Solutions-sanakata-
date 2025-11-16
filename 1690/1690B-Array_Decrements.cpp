#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, dif, ans = 1, mxn = INT_MIN, mxp; cin >> n;
        int a[n], b[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(mxn < a[i]) mxn = a[i], mxp = i;
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
            if(i == mxp) dif = a[i] - b[i];
        }
        if(dif < 0) ans = 0;
        for(int i = 0; i < n; i++) if((a[i] - dif < 0 ? 0 : a[i] - dif) != b[i]) ans = 0;
        cout << (ans ? "YES" : "NO") << "\n";
    }
}
