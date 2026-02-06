#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, x, xi, y; cin >> n;
        vector<int> a(n);
        bool search = false, find = false;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(search && x == a[i]) search = false, y = i, find = true; 
            if(!find && !search && a[i] != n - i) search = true, x = n - i, xi = i;
        }
        if(find) reverse(a.begin() + xi, a.begin() + y + 1);
        for(const auto& nums : a) cout << nums << " ";
        cout << "\n";
    }
}
