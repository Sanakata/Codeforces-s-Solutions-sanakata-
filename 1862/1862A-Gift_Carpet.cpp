#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, m, ans = 0; cin >> n >> m;
        string vika = "vika";
        char carpet[n][m];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> carpet[i][j];
            }
        }
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(carpet[j][i] == vika[ans]){
                    ans++;
                    break;
                }
            }
            if(ans == 4) break;
        }
        cout << (ans == 4 ? "YES" : "NO") << "\n";
    }
}
