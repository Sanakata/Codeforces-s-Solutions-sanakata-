#include <bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        long long n, m, ans = 0; cin >> n >> m;
        int a[n];
        bool check = false;
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);
        if(m > n) ans += a[0] * (m - n + 1), check = true;
        for(int i = (check ? 1 : n - m), j = (check ? m - n + 2 : 1); i < n; i++, j++) ans += (long long) a[i] * j;
        cout << (long long) ans << "\n";
    }
}
