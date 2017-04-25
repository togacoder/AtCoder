#include <bits/stdc++.h>
using namespace std;
int main() {
	string a, b;
	cin >> a;
	cin >> b;
	if(a.length() < b.length()) {
		cout << "LESS" << endl;
	} else if(b.length() < a.length()) {
		cout << "GREATER" << endl;
	} else {
		for(int i = 0; i < a.length(); i++) {
			int x = a[i] - '0';
			int y = b[i] - '0';
			if(x < y) {
				cout << "LESS" << endl;
				return 0;
			} else if(y < x) {
				cout << "GREATER" << endl;
				return 0;
			}
		}
		cout << "EQUAL" << endl;
	}

	return 0;
}
