#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, ans = 0; cin >> n;
        unordered_map<int, int> lastOccurence;
        for(int i = 0; i < n; i++){
            int a; cin >> a;
            if(ans < lastOccurence[a]) ans = lastOccurence[a];
            lastOccurence[a] = i + 1;
        }
        cout << ans << "\n";
    }
}
