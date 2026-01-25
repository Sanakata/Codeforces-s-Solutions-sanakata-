#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int n, k; cin >> n >> k;
    string al = "abcdefghijklmnopqrstuvwxyz", se = al.substr(0, k);
    for(int i = 0; i < n / k; i++) cout << se;
    cout << se.substr(0, n % k);
}
