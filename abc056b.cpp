#include <bits/stdc++.h>
using namespace std;
int main() {
	int w, a, b;
	cin >> w >> a >> b;
	if(b < a) {
		swap(a, b);
	}
	a += w;
	
	if(a < b) {
		cout << b - a << endl;
	} else {
		cout << "0" << endl;
	}

	return 0;
}
