#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int q; cin >> q;
    while(q--){
        int ansI = -1, ansV = 0, time = 0, n, t; cin >> n >> t;
        int a[n], b[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];
        for(int i = 0; i < n; i++){
            time = a[i] + i;
            if(time > t) continue;
            if(ansV < b[i]) ansI = i + 1, ansV = b[i];
        }
        cout << ansI << "\n";
    }
}
