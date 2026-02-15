#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, c = 0; cin >> n;
        int a[3] = {1, 0, 1};
        bool ans = true;
        for(int i = 0; i < n - 2; i++){
            int b; cin >> b;
            if(ans && a[c] != b) c = 0;
            if(ans && c < 3 && a[c] == b) c++;
            if(ans && c > 2) ans = false;
        }
        cout << (ans ? "YES" : "NO") << "\n";
    }
}
