#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, mxc = 0, ans = 1, cx; cin >> n;
        unordered_map<int, int> oc;
        for(int i = 0; i < n; i++){
            int a; cin >> a;
            mxc = max(mxc, ++oc[a]);
        }
        if(mxc == n){
            cout << "0\n";
            continue;
        }
        cx = mxc * 2;
        while(cx < n) cx *= 2, ans++;
        cout << ans + (n - mxc) << "\n";
    }
}
