#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, e = 0, o = 0; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
            (a[i] % 2 ? e : o) = 1;
        }
        if(e && o) sort(a, a + n);
        for(int x : a) cout << x << " ";
        cout << "\n";
    }
}
