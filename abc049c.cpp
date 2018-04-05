#include <bits/stdc++.h>
using namespace std;
int main() {
	string str;
	cin >> str;
	
	reverse(str.begin(), str.end());
	int num = 0, len = str.length();
	while(1) {
		if(num == len) {
			cout << "YES" << endl;
			break;
		}

		if(str.substr(num, 7) == "remaerd") {
			num += 7;
		} else if(str.substr(num, 6) == "resare") {	
			num += 6;
		} else if(str.substr(num, 5) == "maerd") {
			num += 5;
		} else if(str.substr(num, 5) == "esare") {
			num += 5;
		} else {
			cout << "NO" << endl;
			break;
		}
	}

	return 0;
}
