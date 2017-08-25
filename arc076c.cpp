#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;
int main() {
	int n, m;
	cin >> n >> m;
	long long int ans = 1;
	if((m == n - 1)||(m == n + 1)||(n == m - 1)||(n == m + 1)||(m == n)) {
		for(int i = 1; i <= m; i++) {
			ans *= i;
			ans %= MOD;
		}
		for(int i = 1; i <= n; i++) {
			ans *= i;
			ans %= MOD;
		}
		if(n == m) {
			ans *= 2;
			ans %= MOD;
		}
	} else {
		ans = 0;
	}
	
	cout << ans << endl;

	return 0;
}
