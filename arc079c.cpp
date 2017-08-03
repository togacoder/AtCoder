#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, m;
	cin >> n >> m;
	vector<int> a(m);
	vector<int> b(m);
	vector<int> c(n + 1 , 0);

	for(int i = 0; i < m; i++) {
		cin >> a[i] >> b[i];
		if(a[i] == 1) {
			c[b[i]] = 1;
		}
	}
	int flag = 0;
	for(int i = 0; i < m; i++) {
		if((b[i] == n)&&(c[a[i]] == 1)) {
			flag++;
			break;
		}
	}
	if(flag) {
		cout << "POSSIBLE" << endl;
	} else {
		cout << "IMPOSSIBLE" << endl;
	}

	return 0;
}
