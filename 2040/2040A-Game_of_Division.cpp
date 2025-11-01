#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, k, ans = 0; cin >> n >> k;
        vector<vector<int>> occurences(k);
        for(int i = 0; i < n; i++){
            int a; cin >> a;
            occurences[a % k].push_back(i + 1);
        }
        for(const auto& o : occurences){
            if(o.size() == 1){
                ans = o[0];
                break;
            }
        }
        cout << (ans ? "YES\n" + to_string(ans) : "NO") << "\n";
    }
}
