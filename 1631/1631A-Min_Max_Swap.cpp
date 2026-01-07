#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, mx1 = INT_MIN, mx2 = INT_MIN; cin >> n;
        int a[n], b[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
            mx1 = max(mx1, a[i]);
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
            mx1 = max(mx1, b[i]);
        }
        for(int i = 0; i < n; i++) mx2 = max(mx2, min(a[i], b[i]));
        cout << mx1 * mx2 << "\n";
    }
}
