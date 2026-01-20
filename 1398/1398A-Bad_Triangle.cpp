#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        cout << ((long long) a[0] + a[1] <= a[n - 1] ? "1 2 " + to_string(n) : "-1") << "\n";
    }
}
