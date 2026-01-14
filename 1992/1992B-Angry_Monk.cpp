#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false); cin.tie(NULL);
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		int a[k], dec = n;
		long long ans = 0;
		for(int i = 0; i < k; i++) cin >> a[i];
		sort(a, a + k, greater<int>());
		for(int i = 1; i < k; i++) ans += a[i] * 2 - 1;
		cout << ans << "\n";
	}
}
