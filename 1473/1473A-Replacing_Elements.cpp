#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, d, mn1 = INT_MAX, mn2 = INT_MAX; cin >> n >> d;
        bool check = true;
        for(int i = 0; i < n; i++){
            int a; cin >> a;
            if(a > d) check = false;
            if(mn1 > a) mn2 = mn1, mn1 = a;
            else if(mn2 > a) mn2 = a;
        }
        cout << (check || (mn1 + mn2 <= d) ? "YES" : "NO") << "\n";
    }
}
