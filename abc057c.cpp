#include <bits/stdc++.h>
using namespace std;
int f(long long int x, long long int y);

int main() {
	long long int n, min = INT_MAX;
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

int f(long long int x, long long int y) {
	int p = 0, q = 0;
	while(x != 0) {
		p++;
		x /= 10;
	}
	while(y != 0) {
		q++;
		y /= 10;
	}
	
	if(p < q) {
		return q;
	} else {
		return p;
	}
}
