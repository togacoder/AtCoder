#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, odd = 0, four = 0;
	cin >> n;
	
	for(int i = 0; i < n; i++) {
		int num;
		cin >> num;
		if(num % 2) {
			odd++;
		} else if(num % 4 == 0) {
			four++;
		}
	}
	if(n % 2) {
		if(odd - 1 <= four) {
			cout << "Yes" << endl;
		} else {
			cout << "No" << endl;
		}
	} else {
		if(odd <= four) {
			cout << "Yes" << endl;
		} else {
			cout << "No" << endl;
		}
	}


	return 0;
}
