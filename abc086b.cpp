#include <bits/stdc++.h>
using namespace std;
int main() {
	string a, b;
	int n, m;
	cin >> a >> b;
	a += b;
	n = stoi(a);
	m = sqrt(n);
	
	if(m * m == n) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}

	return 0;
}
