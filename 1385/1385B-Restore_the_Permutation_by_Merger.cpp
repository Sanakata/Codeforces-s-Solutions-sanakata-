#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<bool> isOccur(n, false);
        for(int i = 0; i < n * 2; i++){
            int a; cin >> a;
            if(!isOccur[a - 1]){
                isOccur[a - 1] = true;
                cout << a << " ";
            }
        }
        cout << "\n";
    }
}
