#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int a, b, c, d, mxf, mnf, mxs, mns; cin >> a >> b >> c >> d;
        mxf = max(a, b) - 1, mnf = min(a, b), mxs = max(c - a, d - b) - 1, mns = min(c - a, d - b);
        cout << (mxf / 2 <= mnf && mxs / 2 <= mns ? "YES" : "NO") << "\n";
    }
}
