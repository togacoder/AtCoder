#include <bits/stdc++.h>
using namespace std;
int main() {
	int a, b, c, x, ans = 0;
	cin >> a >> b >> c >> x;
	for(int i = 0; i <= a; i++) {
		for(int j = 0; j <= b; j++) {
			if(x < 500 * i + 100 * j) break;
			if((x - 500 * i - 100 * j) / 50 <= c) ans++;
		}
	}
	cout << ans << endl;

	return 0;
}
