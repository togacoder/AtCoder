#include <bits/stdc++.h>
using namespace std;
int main() {
	long long int n, m, ans = 0;;
	cin >> n >> m;
	if(n * 2 <= m) {
		ans = n;
		m -= n * 2;
		ans += m / 4;
	} else  {
		ans = m / 2;
	}
	cout << ans << endl;

	return 0;
}
