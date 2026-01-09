#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        long long n, ans = 0; cin >> n;
        while(n > 1 && n % 2 == 0) ans++, n /= 2;
        while(n > 1 && n % 3 == 0) ans += 2, n /= 3;
        while(n > 1 && n % 5 == 0) ans += 3, n /= 5;
        cout << (n == 1 ? ans : -1) << "\n";
    }
}
