#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << (n % 3 == 0 ? 0 : 3 - n % 3) << "\n";
    }
}
