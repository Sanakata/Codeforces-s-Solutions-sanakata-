#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, h, l, mx, mn, mxC = 0, mnC = 0; cin >> n >> h >> l;
        mx = max(h, l), mn = min(h, l);
        for(int i = 0; i < n; i++){
            int a; cin >> a;
            if(a <= mx) mxC++;
            if(a <= mn) mnC++;
        }
        cout << min((mx == mn ? mnC / 2 : mnC), mxC / 2) << "\n";
    }
}
