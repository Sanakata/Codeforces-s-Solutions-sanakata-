#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int n; cin >> n;
    while(n--){
        int x, y; cin >> x >> y;
        x = abs(x);
        cout << (y - x > -1 || abs(y - x) <= ++x ? "YES" : "NO") << "\n";
    }
}
