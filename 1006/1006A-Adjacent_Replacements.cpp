#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        cout << a - (a % 2 == 0 ? 1 : 0) << " ";
    }
}
