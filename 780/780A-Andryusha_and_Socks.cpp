#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int n, ans = INT_MIN, curr = 0; cin >> n;
    vector<bool> a(n, false);
    for(int i = 0; i < n * 2; i++){
        int b; cin >> b;
        if(!a[b - 1]) curr++, a[b - 1] = true;
        else curr--;
        ans = max(ans, curr);
    }
    cout << ans << "\n";
}
