#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin >> s;
	int len = s.length();
	long long int ans = 0;
	ans = len - 1;
	ans *= 2;

	for(int i = 1; i < len - 1; i++) {
		if(s[i] == 'U') {
			ans += len - i - 1;
			ans += 2 * i;
		} else {
			ans += 2 * (len - i - 1);
			ans += i;
		}
	}
	cout << ans << endl;

	return 0;
}
