#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, found = 0; cin >> n;
        vector<int> a(n), e, o;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(!found && a[i] % 2 == 0){
                e.push_back(a[i]);
                if(e.size() > 1) found = 1;
            }
            if(!found && a[i] % 2 == 1){
                o.push_back(a[i]);
                if(o.size() > 1 && o[o.size() - 2] * 2 > o[o.size() - 1]) found = 1;
            }
        }
        if(e.size() > 1) cout << e[0] << " " << e[1] << "\n";
        else if(found) cout << o[o.size() - 2] << " " << o[o.size() - 1] << "\n";
        else{
            for(int i = 1; i < n; i++){
                for(int j = 0; j < i; j++){
                    if((a[i] % a[j]) % 2 == 0){
                        cout << a[j] << " " << a[i] << "\n";
                        found = 1;
                        break;
                    }
                }
                if(found) break;
            }
            if(!found) cout << -1 << "\n";
        }
    }
}
