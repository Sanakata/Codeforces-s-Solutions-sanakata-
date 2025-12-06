#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, ans = 0; cin >> n;
        vector<int> occurences(n + 1, 0);
        for(int i = 0; i < n; i++){
            int a; cin >> a;
            occurences[a]++;
        }
        for(int i = 0; i <= n; i++) ans += occurences[i] - (i <= occurences[i] ? i : 0);
        cout << ans << "\n";
    }
}
