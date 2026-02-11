#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int a, b, al1 = 0, al2 = 0; cin >> a >> b;
        int ac = a, bc = b;
        while((al1 % 2 == 0 ? ac : bc) >= pow(2, al1)) (al1 % 2 == 0 ? ac : bc) -= pow(2, al1), al1++;
        ac = a, bc = b;
        while((al2 % 2 == 0 ? bc : ac) >= pow(2, al2)) (al2 % 2 == 0 ? bc : ac) -= pow(2, al2), al2++;
        cout << max(al1, al2) << "\n";
    }
}
