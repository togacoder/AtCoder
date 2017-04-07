#include <bits/stdc++.h>
using namespace std;
int f(int x, int y);

int main() {
	int n, min = INT_MAX;
	cin >> n;
	for(int i = 1; i <= sqrt(n); i++) {
		if(n % i == 0) {
			int num = f(i, n / i);
			if(num < min) {
				min = num;
			} 
		}
	}
	cout << min << endl;

	return 0;
}

int f(int x, int y) {
	int p = 0, q = 0;
	while(x != 0) {
		x /= 10;
		p++;
	}
	while(y != 0) {
		y /= 10;
		q++;
	}
	if(p < q) {
		return q;
	} else {
		return p;
	}
}
