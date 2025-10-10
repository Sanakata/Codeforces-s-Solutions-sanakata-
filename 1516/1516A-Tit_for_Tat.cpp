#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        int a[n], b = k;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(i < n - 1){
                if(a[i] <= b) b -= a[i], a[i] = 0;
                else a[i] -= b, b = 0;
            }
            else a[i] += (k - b);
            cout << a[i] << " ";
        }
        cout << "\n";
    }
}
