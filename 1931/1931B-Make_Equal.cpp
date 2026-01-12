#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false); cin.tie(NULL);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		long long nAvg, nTemp = 0;
		bool ans = true;
		for(int i = 0; i < n; i++) cin >> a[i];
		nAvg = accumulate(a, a + n, 0LL) / n;
		for(int i = 0; i < n; i++){
			if(a[i] > nAvg) nTemp += a[i] - nAvg;
			else if(a[i] < nAvg){
				nTemp -= nAvg - a[i];
				if(nTemp < 0){
					ans = false;
					break;
				}
			}
		}
		cout << (ans ? "YES" : "NO") << "\n";
	}
}
