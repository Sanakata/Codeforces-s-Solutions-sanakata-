#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int n, m, ha = 0, hb = 0; cin >> n;
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        ha = max(ha, a);
    }
    cin >> m;
    for(int i = 0; i < m; i++){
        int b; cin >> b;
        hb = max(hb, b);
    }
    cout << ha << " " << hb << "\n";
}
