#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, c_unique = 0, i_unique = 0; cin >> n;
        unordered_map<int, int> occurence;
        for(int i = 0; i < n; i++){
            int a; cin >> a;
            if(occurence[a]++ == 0) c_unique++;
            if(occurence[a] > 1) i_unique = i;
        }
        if(c_unique > 1){
            cout << "YES\n";
            for(int i = 0; i < n; i++) cout << (i == i_unique ? 'R' : 'B');
            cout << "\n";
        }else cout << "NO\n";
    }
}
