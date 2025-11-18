#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int ai[3]; cin >> ai[0] >> ai[1] >> ai[2];
    sort(ai, ai + 3);
    cout << (ai[2] - ai[0] > 9 ? "check again" : "final " + to_string(ai[1])) << "\n";
}
