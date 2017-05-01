#include<bits/stdc++.h>
using namespace std;
int main() {
	int a, b, c, flag = 0;
	cin >> a >> b >> c;
	for(int i = 1; i <= 100; i++) {
		if(a * i % b == c) {
			flag = 1;
		}
	}
	if(flag) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}

	return 0;
}
