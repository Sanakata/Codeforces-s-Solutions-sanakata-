#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, ans = 0; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n - 1; i++){
            for(int j = i + 1; j < n; j++){
                if(gcd(a[i], a[j]) <= 2){
                    ans = 1;
                    break;
                }
            }
            if(ans) break;
        }
        cout << (ans ? "YES" : "NO") << "\n";
    }
}
