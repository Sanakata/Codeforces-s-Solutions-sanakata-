#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        long long k, x; cin >> k >> x;
        cout << (long long) x * ((long long) pow(2, k)) << "\n";
    }
}
