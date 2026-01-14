#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int a[3]; cin >> a[0] >> a[1] >> a[2];
        for(int i = 0; i < 5; i++){
            sort(a, a + 3);
            a[0]++;
        }
        cout << a[0] * a[1] * a[2] << "\n";
    }
}
