#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, m, ans = 0; cin >> n >> m;
        bool f = false;
        vector<int> occurences(1001, 0);
        for(int i = 0; i < n; i++){
            int a; cin >> a;
            if(occurences[a] == 0) occurences[a]++;
        }
        for(int i = 0; i < m; i++){
            int b; cin >> b;
            if(!f && occurences[b] == 1) f = true, ans = b;
        }
        cout << (f ? "YES\n1 " + to_string(ans) : "NO") << "\n";
    }
}
