#include <bits/stdc++.h>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int x = a, y = b, z = c, count = 0;
	while(x % 2 == 0 && y % 2 == 0 && z % 2 == 0) {
		int o, p, q;
		o = y / 2 + z / 2;
		p = x / 2 + z / 2;
		q = x / 2 + y / 2;
		count++;
		if(a == o && b == p && c == q) {
			count = -1;
			break;
		}
		x = o;
		y = p;
		z = q;
	}
	

	cout << count << endl;

	return 0;
}
