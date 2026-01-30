#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n], b[n], ca = 0, cb = 0;
        bool c = false, d = false;
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++){
            cin >> b[i];
            if(a[i]) ca++;
            if(b[i]) cb++;
            if(a[i] == 1 && b[i] == 0) c = true;
            if(a[i] == 0 && b[i] == 1) d = true;
        }
        cout << abs(ca - cb) + (c && d) << "\n";
    }
}
