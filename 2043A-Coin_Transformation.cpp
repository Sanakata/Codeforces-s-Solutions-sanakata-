#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        long long n, i = 1; cin >> n;
        while(n > 3) n /= 4, i *= 2;
        cout << i << "\n";
    }
}
