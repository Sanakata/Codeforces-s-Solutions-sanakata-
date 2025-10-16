#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int c[26] = {0};
        int mxf = 0, mxs = 0;
        for(int i = 0; i < 4; i++){
            char a; cin >> a;
            if(mxf <= ++c[a - 'a']) mxs = mxf, mxf = c[a - 'a'];
            else if(mxs <= c[a - 'a']) mxs = c[a - 'a'];
        }
        cout << (mxf == 4 ? 0 : (mxf == 3 || (mxf == 2 && mxf == mxs) ? 1 : (mxf == 2 ? 2 : 3))) << "\n";
    }

}
