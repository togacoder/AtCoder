#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, y;
	cin >> n >> y;
	int X = -1, Y = -1, Z = -1;

	for(int i = 0; i <= y / 10000; i++) {
		for(int j = 0; j <= y / 5000; j++) {
			int k = (y - 10000 * i - 5000 * j) / 1000;
			if((i + j + k == n)&&(0 <= k)) {
				X = i;
				Y = j;
				Z = k;
				break;
			}
		}
		if(X != -1) break; 
	}

	cout << X << " " << Y << " " << Z << endl;

	return 0;
}
