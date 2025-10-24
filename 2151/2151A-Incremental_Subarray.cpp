#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, m, l, c = 1, p = 0; cin >> n >> m;
        for(int i = 0; i < m; i++){
            cin >> l;
            if(p >= l) c = 0;
            p = l;
        }
        cout << (c ? n - l + 1 : 1) << "\n";
    }
}
