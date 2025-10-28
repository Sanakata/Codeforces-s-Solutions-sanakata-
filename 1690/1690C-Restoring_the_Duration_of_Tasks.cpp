#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> s(n + 1, 0), f(n + 1, 0);
        for(int i = 1; i <= n; i++) cin >> s[i];
        for(int i = 1; i <= n; i++) cin >> f[i];
        for(int i = 1; i <= n; i++) cout << f[i] - max(s[i], f[i - 1]) << " ";
        cout << "\n";
    }
}
