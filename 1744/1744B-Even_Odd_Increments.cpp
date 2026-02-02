#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, q, even = 0, odd = 0; cin >> n >> q;
        long long nSum = 0;
        for(int i = 0; i < n; i++){
            int a; cin >> a;
            (a % 2 == 0 ? even++ : odd++);
            nSum += a;
        }
        for(int i = 0; i < q; i++){
            int type, x; cin >> type >> x;
            if(type == 0){
                nSum += x * even;
                if(x % 2 == 1) odd = n, even = 0;
            }else{
                nSum += x * odd;
                if(x % 2 == 1) odd = 0, even = n;
            }
            cout << nSum << "\n";
        }
    }
}
