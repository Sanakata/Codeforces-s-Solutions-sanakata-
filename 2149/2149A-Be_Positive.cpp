#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, z = 0, m = 0; cin >> n;
        for(int i = 0; i < n; i++){
            int a; cin >> a;
            if(a == 0) z++;
            else if(a == -1) m++;
        }
        cout << z + m % 2 * 2 << "\n";
    }
}
