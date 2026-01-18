#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int l, r, ans = -1; cin >> l >> r;
    for(int i = l; i <= r; i++){
        string s = to_string(i);
        bool is_unique = true;
        unordered_map<char, bool> occurence;
        for(const auto& c : s){
            if(!occurence[c]) occurence[c] = true;
            else{
                is_unique = false;
                break;
            }
        }
        if(is_unique){
            ans = i;
            break;
        }
    }
    cout << ans << "\n";
}
