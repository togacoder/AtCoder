#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, odd = 0, even = 0;
	int num;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> num;
		if(num % 2) {
			odd++;
		} else {
			even++;
		}
	}
	
	even += odd / 2;
	odd %= 2;

	if(odd) {
		cout << "NO" << endl;
	} else {
		cout << "YES" << endl;
	}

	return 0;
}
