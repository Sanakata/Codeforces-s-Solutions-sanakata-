#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, mxn = INT_MIN; cin >> n;
        int a[n], b[n];
        bool ans = true;
        for(int i = 0; i < n * 2; i++){
            cin >> (i < n ? a[i] : b[i - n]);
            mxn = max(mxn, (i < n ? a[i] : b[i - n]));
        }
        if(mxn > max(a[n - 1], b[n - 1])) cout << "NO\n";
        else{
            for(int i = 0; i < n - 1; i++){
                if(min(a[i], b[i]) > min(a[n - 1], b[n - 1])){
                    ans = false;
                    break;
                }
            }
            cout << (ans ? "YES" : "NO") << "\n";
        }
    }
}
