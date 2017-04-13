#include <bits/stdc++.h>
using namespace std;
int main() {
	long long int x;
	cin >> x;
	for(long long int i = 0; i <= x; i++) {
		if(((i * (i + 1)) / 2) >= x) {
			cout << i << endl;
			break;
		}
	}
	
	return 0;
}
