#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, t;
	long long int x = 0;
	cin >> n >> t;
	vector <int> arr(n);
	
	for(int i = 0; i < n; i++) cin >> arr[i];
	for(int i = 0; i < n - 1; i++) {
		if(arr[i] + t <= arr[i + 1]) {
			x += t;
		} else {
			x += arr[i + 1] - arr[i];
		}
	}
	x += t;
	cout << x << endl;

	return 0;
}
