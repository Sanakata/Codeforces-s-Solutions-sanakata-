#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, odd = 0; cin >> n;
        for(int i = 0; i < n; i++){
            int a; cin >> a;
            odd += a % 2;
        }
        cout << min(odd, n - odd) << "\n";
    }
}
