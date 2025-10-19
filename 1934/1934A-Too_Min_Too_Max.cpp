#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, mx1 = INT_MIN, mx2 = INT_MIN, mn1 = INT_MAX, mn2 = INT_MAX; cin >> n;
        for(int i = 0; i < n; i++){
            int a; cin >> a;
            if(mx1 <= a) mx2 = mx1, mx1 = a;
            else if(mx2 < a) mx2 = a;
            if(mn1 >= a) mn2 = mn1, mn1 = a;
            else if(mn2 > a) mn2 = a;
        }
        cout << 2 * (mx1 + mx2) - 2 * (mn1 + mn2) << "\n";
    }
}
