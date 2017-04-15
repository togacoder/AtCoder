#include <bits/stdc++.h>
using namespace std;
int main() {
	long long int x, count = 0;
	int flag = 0;
	cin >> x;
	count = x / 11;
	count *= 2;
	x %= 11;
	if(7 <= x) {
		count += 2;
	} else if(0 < x && x < 7) {
		count++;
	}
	cout << count << endl;

	return 0;
}
