#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, x; cin >> n >> x;
        int a[n * 2];
        bool ans = true;
        for(int i = 0; i < n * 2; i++) cin >> a[i];
        sort(a, a + n * 2);
        for(int i = 0; i < n; i++){
            if(a[i + n] < a[i] + x){
                ans = false;
                break;
            }
        }
        cout << (ans ? "YES" : "NO") << "\n";
    }
}
