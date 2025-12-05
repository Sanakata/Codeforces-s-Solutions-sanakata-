#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        unordered_set<int> oc;
        for(int i = 0; i < n; i++){
            int a; cin >> a;
            oc.insert(a);
        }
    cout << oc.size() << "\n";
    }
}
