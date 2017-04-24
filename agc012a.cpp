#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	long long int ans = 0;
	vector <int> arr(3 * n);
	for(int i = 0;i < 3 * n; i++) {
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end());

	for(int i = n; i < 3 * n; i += 2) {
		ans += arr[i];
	}
	cout << ans << endl;

	return 0;
}
