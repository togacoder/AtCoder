#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	bool f = 0;

	for(int i = 0; i < n; i++) {
		int t, x, y, u = 0, p = 0, q = 0;
		cin >> t >> x >> y;
		u = t - u;
		p = x - p;
		q = y - q;
		if((u < p + q)||((u + p + q) % 2 == 1)) {
			f = 1;
		}
	}

	if(f) {
		cout << "No" << endl;
	} else {
		cout << "Yes" << endl;
	}

	return 0;
}
