#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, i; cin >> n;
        for(i = n / 2 + 1; i <= n; i++) cout << i << " " << (i == n && n % 2 ? "" : to_string(i - n / 2)) << " ";
        cout << "\n";
    }
}
