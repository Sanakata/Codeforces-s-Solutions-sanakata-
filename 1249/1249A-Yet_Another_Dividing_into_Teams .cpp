#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int q; cin >> q;
    while(q--){
        int n; cin >> n;
        vector<bool> occurence(102, false);
        bool ans = true;
        for(int i = 0; i < n; i++){
            int a; cin >> a;
            if(occurence[a + 1] || occurence[a - 1]) ans = false;
            occurence[a] = true;
        }
        cout << (ans ? 1 : 2) << "\n";
    }
}
