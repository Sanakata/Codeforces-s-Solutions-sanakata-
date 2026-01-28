#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        bool d = false;
        string p, s;
        for(int i = 0; i < n - 2; i++){
            cin >> s;
            if(i == 0){
                cout << s + (n == 3 ? "b" : "");
            }else{
                if(!d && (p[1] != s[0] || i == n - 3)){
                    cout << s;
                    d = true;
                }else{
                    cout << s[1];
                }
            }
            p = s;
        }
        cout << "\n";
    }
}
