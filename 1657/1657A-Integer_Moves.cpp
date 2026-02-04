#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int x, y, d, r = 1; cin >> x >> y;
        d = x * x + y * y;
        while(r * r < d) r++;
        cout << (x == 0 && x == y ? 0 : (r * r == d ? 1 : 2)) << "\n";
    }
}
