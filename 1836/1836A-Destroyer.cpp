#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        bool ans = true;
        vector<int> occurences(101, 0);
        for(int i = 0; i < n; i++){
            int a; cin >> a;
            occurences[a]++;
        }
        for(int i = 1; i < 101; i++){
            if(occurences[i - 1] < occurences[i]){
                ans = false;
                break;
            }
        }
        cout << (ans ? "YES" : "NO") << "\n";
    }
}
