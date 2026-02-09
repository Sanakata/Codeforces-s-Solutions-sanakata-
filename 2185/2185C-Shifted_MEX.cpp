#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, cons = 1, ans = 1; cin >> n;
        vector<int> un;
        unordered_map<int, bool> is_found;
        for(int i = 0; i < n; i++){
            int a; cin >> a;
            if(!is_found[a]) un.push_back(a), is_found[a] = true;
        }
        sort(un.begin(), un.end());
        for(int i = 0; i < un.size() - 1; i++){
            if(un[i] + 1 == un[i + 1]) cons++;
            if(i == un.size() - 2 || un[i] + 1 != un[i + 1]) ans = max(ans, cons), cons = 1;
        }
        cout << ans << "\n";
    }
}
