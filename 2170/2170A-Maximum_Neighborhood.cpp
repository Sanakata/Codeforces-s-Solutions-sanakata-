#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << (n == 1 ? 1 : (n == 2 ? 9 : max((n * n - 1) * 3 + (n * (n - 1) - 1), (n * (n - 1) - 1) * 5))) << "\n";
    }
}
