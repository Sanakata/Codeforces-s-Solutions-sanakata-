#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int nA = n, a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(i > 0 && a[i - 1] > a[i]) nA++;
        }
        cout << nA << "\n" << a[0] << " ";
        for(int i = 1; i < n; i++) cout << (a[i - 1] > a[i] ? to_string(a[i]) + " " + to_string(a[i]) : to_string(a[i])) << " ";
        cout << "\n";
    }
}
