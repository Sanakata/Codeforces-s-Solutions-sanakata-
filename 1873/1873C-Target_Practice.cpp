#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int ans = 0, x, y;
        for(int i = 0; i < 10; i++){
            for(int j = 0; j < 10; j++){
                char c; cin >> c;
                x = (i <= 4 ? 4 - i : i - 5);
                y = (j <= 4 ? 4 - j : j - 5);
                if(c == 'X') ans += 5 - max(x, y);
            }
        }
        cout << ans << "\n";
    }
}
