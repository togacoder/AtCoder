#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, min = INT_MAX, max = INT_MIN;
	cin >> n;
	for(int i = 0; i < n; i++) {
		int num;
		cin >> num;
		if(num < min) min = num;
		if(num > max) max = num;
	}
	cout << max - min << endl;

	return 0;
}
