#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        long long n, s; cin >> n >> s;
        cout << (s / (n * n) > n + 1 ? n : s / (n * n)) << "\n";
    }
}
