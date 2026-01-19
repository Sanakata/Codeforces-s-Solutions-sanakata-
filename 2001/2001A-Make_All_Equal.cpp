#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, mxC = 0; cin >> n;
        int c[n + 1] = {0};
        for(int i = 0; i < n; i++){
            int a; cin >> a;
            mxC = max(mxC, ++c[a]);
        }
        cout << n - mxC << "\n";
    }
}
