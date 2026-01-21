#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, m, sa = 0, sb = 0; cin >> n >> m;
        string a, b; cin >> a >> b;
        for(int i = 1; i < n + m; i++){
            char ca1 = (i - 1 < n ? a[i - 1] : b[m + n - i]), ca2 = (i < m ? b[i] : a[m + n - i - 1]), cb1 = (i < n ? a[i] : b[m + n - i - 1]), cb2 = (i - 1 < m ? b[i - 1] : a[m + n - i]);
            if(ca1 == cb1) sa++;
            if(ca2 == cb2) sb++;
        }
        cout << (max(sa, sb) < 2 ? "YES" : "NO") << "\n";
    }
}
