#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int l, a, b, ans = INT_MIN; cin >> l >> a >> b;
        vector<int> track(l, 0);
        while(1){
            if(!track[a]) track[a] = 1, ans = max(a, ans), a = (a + b) % l;
            else break;
        }
        cout << ans << "\n";
    }
}
