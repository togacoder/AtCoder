#include <bits/stdc++.h>
#define MAX 100000
using namespace std;
int main() {
	long long int n, k;
	cin >> n >> k;
	long long int array[MAX + 1];
	for(int i = 0; i <= MAX; i++) {
		array[i] = 0;
	}

	for(int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		array[a] += b;
	}

	for(int i = 1; i <= MAX; i++) {
		if(k <= array[i]) {
			cout << i << endl;
			break;
		}
		k -= array[i];
	}

	return 0;
}
