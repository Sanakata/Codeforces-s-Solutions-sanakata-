#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        unordered_map<int, bool> is_occur;
        vector<int> un;
        for(int i = 0; i < n; i++){
            int a; cin >> a;
            if(!is_occur[a]) is_occur[a] = true, un.push_back(a);
        }
        sort(un.begin(), un.end());
        for(int i = 0; i < un.size(); i++){
            if(un.size() <= un[i]){
                cout << un[i] << "\n";
                break;
            }
        }
    }
}
