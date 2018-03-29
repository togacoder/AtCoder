#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, a, b, ans = 0;
	cin >> n >> a >> b;
	for(int i = 1; i <= n; i++) {
		int add = 0, num = i;
		while(0 != num) {
			add += num % 10;
			num /= 10;
		}
		if((a <= add)&&(add <= b)) ans += i;
		
	}
	cout << ans << endl;

	return 0;
}
