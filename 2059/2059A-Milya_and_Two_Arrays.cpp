#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, uniqueB = 0, cUnique = 0, bDec; cin >> n;
        bool ans = false;
        unordered_map<int, int> a, b;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            a[x]++;
        }
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            if(b[x]++ == 0) uniqueB++;
        }
        for(const auto& pA : a){
            if(!uniqueB) break;
            bDec = min(pA.second, uniqueB);
            cUnique += bDec;
            if(cUnique > 2){
                ans = true;
                break;
            }
            for(auto& pB : b){
                if(!bDec) break;
                if(pB.second > 0){
                    pB.second--, bDec--;
                    if(!pB.second) cUnique--;
                }
            }
        }
        cout << (ans ? "YES" : "NO") << "\n";
    }
}
