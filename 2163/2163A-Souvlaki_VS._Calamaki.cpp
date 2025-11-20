#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, ans = 1; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);
        for(int i = 1; i < n - (n % 2 == 0); i+=2) if(a[i] != a[i + 1]) ans = 0;
        cout << (ans ? "YES" : "NO") << "\n";
    }
}
