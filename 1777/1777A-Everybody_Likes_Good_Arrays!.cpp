#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, ans = 0; cin >> n;
        bool isOdd;
        for(int i = 0; i < n; i++){
            int a; cin >> a;
            if(i == 0) isOdd = a % 2;
            else{
                if(a % 2 == isOdd) ans++;
                else isOdd = !isOdd;
            }
        }
        cout << ans << "\n";
    }
}
