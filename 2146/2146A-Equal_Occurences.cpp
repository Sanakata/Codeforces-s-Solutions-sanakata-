#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, ans = 0; cin >> n;
        vector<int> occurences(101, 0), counts(101, 0);
        for(int i = 0; i < n; i++){
            int a; cin >> a;
            occurences[a]++;
            counts[occurences[a]] += occurences[a];
            ans = max(ans, counts[occurences[a]]);
        }
        cout << ans << "\n";
    }
}
