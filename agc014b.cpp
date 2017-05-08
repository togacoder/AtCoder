#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, m;
	cin >> n >> m;
	vector<int> r(n, 0);

	for(int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		if(x == 1) {
			r[y - 1]++;
		} else if(y == 1) {
			r[x - 1]++;
		} else {
			r[x - 1]++;
			r[y - 1]++;
		}
	}

	int flag = 0;
	for(int i = 0; i < n; i++) {
		if(r[i] % 2) {
			flag++;
			break;
		}
	}

	if(flag) {
		cout << "NO" << endl;
	} else {
		cout << "YES" << endl;
	}

	return 0;
}
