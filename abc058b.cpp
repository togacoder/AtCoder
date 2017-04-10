#include <bits/stdc++.h>
using namespace std;
int main() {
	string o, e;
	cin >> o;
	cin >> e;
	for(int i = 0; i < o.length(); i++) {
		if((o.length() != e.length())&&(i == o.length() - 1)) {
			cout << o[i];
			break;
		} else {
			cout << o[i] << e[i];
		}
	}
	cout << endl;

	return 0;
}
