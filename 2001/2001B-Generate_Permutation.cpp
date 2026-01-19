#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        if(n % 2 == 0) cout << -1;
        else for(int i = 1; i <= n; i++) cout << (i == 1 ? 1 : (i % 2 == 0 ? i + 1 : i - 1)) << " ";
        cout << "\n";
    }
}
