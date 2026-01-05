#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int k, n, r, ans = 1; cin >> k >> n;
        vector<int> add(k - 1, 1);
        r = n - k;
        for(int i = 1; i < add.size() && r > 0; i++){
            int d = min(i, r);
            r -= d, add[i] += d;
        }
        for(int i = 0; i < k; i++){
            cout << ans << " ";
            if(i < k - 1) ans += add[i];
        }
        cout << "\n";
    }
}
