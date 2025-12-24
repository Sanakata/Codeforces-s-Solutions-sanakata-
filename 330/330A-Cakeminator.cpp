#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int r, c, cakes = 0, rL; cin >> r >> c;
    rL = r;
    unordered_map<int, bool> rS, cS;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            char c; cin >> c;
            if(c == 'S') rS[i] = true, cS[j] = true;
        }
        if(!rS[i]) cakes += c, rL--;
    }
    for(int i = 0; i < c; i++) if(!cS[i]) cakes += rL;
    cout << cakes << "\n";
}
