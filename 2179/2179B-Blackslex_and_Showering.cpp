#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, acc = 0, mxd = 0; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(i > 1) mxd = max(mxd, abs(a[i - 1] - a[i - 2]) + abs(a[i - 1] - a[i]) - abs(a[i] - a[i - 2]));
            if(i > 0) acc += abs(a[i] - a[i - 1]);
        }
        mxd = max(mxd, max(abs(a[0] - a[1]), abs(a[n - 1] - a[n - 2])));
        cout << acc - mxd << "\n";
    }
}
