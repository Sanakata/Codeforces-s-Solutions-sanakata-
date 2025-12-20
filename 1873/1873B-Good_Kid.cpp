#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        long long n, mn = INT_MAX, j, ans = 1; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(mn > a[i]) mn = a[i], j = i;
        }
        a[j]++;
        for(int i = 0; i < n; i++) ans *= a[i];
        cout << ans << "\n";
    }
}
