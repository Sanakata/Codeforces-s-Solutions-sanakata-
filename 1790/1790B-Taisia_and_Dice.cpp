#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, s, r, div, rem; cin >> n >> s >> r;
        cout << s - r << " ";
        div = r / --n, rem = r % n;
        for(int i = 0; i < n; i++) cout << div + (i < rem) << " ";
        cout << "\n";
    }
}
