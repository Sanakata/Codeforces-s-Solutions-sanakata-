#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        for(int i = 0; i < n; i++) cout << n / 2 + (n % 2 == 0 ? (i % 2 == 0 ? 1 + i / 2 : - i / 2) : (i % 2 == 0 ? 1 - i / 2 : 2 + i / 2)) << " ";
        cout << "\n";
    }
}
