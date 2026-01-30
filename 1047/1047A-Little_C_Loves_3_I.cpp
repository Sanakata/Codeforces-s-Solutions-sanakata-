#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int n; cin >> n;
    cout << (n % 3 == 2 ? "1 2 " + to_string(n - 3) : "1 1 " + to_string(n - 2)) << "\n";
}
