#include <bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        char tic_tac_toe[3][3];
        string ans = ".";
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                cin >> tic_tac_toe[i][j];
            }
        }
        for(int i = 0; i < 3; i++){
            if(tic_tac_toe[i][0] != '.' && tic_tac_toe[i][0] == tic_tac_toe[i][1] && tic_tac_toe[i][1] == tic_tac_toe[i][2]) ans = tic_tac_toe[i][0];
            if(tic_tac_toe[0][i] != '.' && tic_tac_toe[0][i] == tic_tac_toe[1][i] && tic_tac_toe[1][i] == tic_tac_toe[2][i]) ans = tic_tac_toe[0][i];
        }
        if(tic_tac_toe[0][0] != '.' && tic_tac_toe[0][0] == tic_tac_toe[1][1] && tic_tac_toe[0][0] == tic_tac_toe[2][2]) ans = tic_tac_toe[0][0];
        if(tic_tac_toe[0][2] != '.' && tic_tac_toe[0][2] == tic_tac_toe[1][1] && tic_tac_toe[0][2] == tic_tac_toe[2][0]) ans = tic_tac_toe[0][2];
        cout << (ans == "." ? "DRAW" : ans) << "\n";
    }
}
