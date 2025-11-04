#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        if(n == 3) cout << "-1\n";
        else{
            for(int i = n; i > n / 2 + n % 2; i--) cout << i << " ";
            for(int i = 1; i <= n / 2 + n % 2; i++) cout << i << " ";
            cout << "\n";
        }
    }
}
