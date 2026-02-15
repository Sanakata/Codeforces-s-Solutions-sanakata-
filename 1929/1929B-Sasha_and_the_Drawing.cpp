#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        cout << ((n + n - 2) * 2 >= k ? k / 2 + k % 2 : k - n - n + 2) << "\n";
    }
}
