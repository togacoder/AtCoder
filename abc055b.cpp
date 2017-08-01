#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	long long int ans = 1;
	cin >> n;
	for(int i = 1; i <= n; i++ ) {
		ans *= i;
		ans %= 1000000007;
	}
	cout << ans << endl;

	return 0;
}
