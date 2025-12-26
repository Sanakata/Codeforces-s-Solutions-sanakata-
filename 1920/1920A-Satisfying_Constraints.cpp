#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, mn = INT_MIN, mx = INT_MAX, ans; cin >> n;
        vector<int> nE;
        while(n--){
            int a, x; cin >> a >> x;
            if(a == 1) mn = max(mn, x);
            else if(a == 2) mx = min(mx, x);
            else nE.push_back(x);
        }
        ans = max(mx - mn + 1, 0);
        for(int i = 0; i < nE.size(); i++) if(nE[i] >= mn && nE[i] <= mx) ans--;
        cout << ans << "\n";
    }
}
