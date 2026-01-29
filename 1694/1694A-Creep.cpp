#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int a, b; cin >> a >> b;
        for(int i = 0; i < min(a, b); i++) cout << "10";
        for(int i = 0; i < max(a, b) - min(a, b); i++) cout << (max(a, b) == a ? '0' : '1');
        cout << "\n";
    }
}
