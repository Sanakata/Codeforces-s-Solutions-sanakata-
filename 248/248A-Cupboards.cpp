#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int n, tl = 0, tr = 0, l, r; cin >> n;
    for(int i = 0; i < n; i++){
        cin >> l >> r;
        tl += l, tr += r;
    }
    cout << n * 2 - max(tl, n - tl) - max(tr, n - tr) << "\n";
}
