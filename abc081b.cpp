#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, p, q = INT_MAX;
	cin >> n;
	for(int i = 0; i < n; i++) {
		int arr;
		cin >> arr;
		p = 0;
		while(arr % 2 == 0) {
			arr /= 2;
			p++;
			if(q < p) break;
		}
		if(p < q) q = p;
	}
	cout << q << endl;

	return 0;
}
