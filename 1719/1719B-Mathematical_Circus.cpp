#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    for(int i = 0; i < t; i++){
        int n, k; cin >> n >> k;
        if(k % 4 == 0){
            cout << "NO" << "\n";
        }else{
            cout << "YES" << "\n";
            for(int j = 0; j < n / 2; j++){
                if(k % 2 == 0){
                    (j % 2 == 0) ? cout << j + j + 2 << " " << j + j + 1 << "\n" : cout << j + j + 1 << " " << j + j + 2 << "\n";
                }else{
                    cout << j + j + 1 << " " << j + j + 2 << "\n";
                }
            }
        }
    }
}
