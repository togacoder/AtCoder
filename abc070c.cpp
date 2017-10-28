#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	long long int ans = 0, input, l, s;
	cin >> ans;
	for(int i = 0; i < n - 1; i++) {
		cin >> input;
		l = max(input, ans);
		s = min(input, ans);
		ans = l;
		while(l % s) {
			l += ans;
		}
		ans = l;
	}
	
	cout << ans << endl;

	return 0;
}
