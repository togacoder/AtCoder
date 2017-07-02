#include <bits/stdc++.h>
using namespace std;
int main() {
	long long int n, a, b;
	cin >> n >> a >> b;
	if(a > b) {
		cout << "0" << endl;
		return 0;
	}
	if(n == 1) {
		if(a == b) {
			cout << "1" << endl;
			return 0;
		} else {
			cout << "0" << endl;
			return 0;
		}
	}
	
	long long int ans = (b - a) * (n - 2) + 1;
	cout << ans << endl;
	return 0;
}
