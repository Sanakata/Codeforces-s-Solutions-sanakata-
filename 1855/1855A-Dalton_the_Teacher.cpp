#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, w = 0; cin >> n;
        for(int i = 1; i <= n; i++){
            int a; cin >> a;
            if(a == i) w++;
        }
        cout << ceil((double) w / 2) << "\n";
    }
}
