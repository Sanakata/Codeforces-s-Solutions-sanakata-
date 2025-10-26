#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int n, q; cin >> n >> q;
    vector<int> ans(n + 1, 0);
    for(int i = 0; i < n; i++){
        char c; cin >> c;
        ans[i + 1] = ans[i] + (c - 'a') + 1;
    }
    for(int i = 0; i < q; i++){
        int l, r; cin >> l >> r;
        cout << ans[r] - ans[l - 1] << "\n";
    }
}
