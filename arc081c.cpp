#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector<int> arr(n);
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end());
 	long long int x = 0, y = 0;
	for(int i = n - 1; 0 < i; i--) {
		if(arr[i] == arr[i - 1]) {
			if(x == 0) {
				x = arr[i];
				i--;
			} else if(y == 0) {
				y = arr[i];
				break;
			}
		}
	}
	cout << x * y << endl;

	return 0;
}
