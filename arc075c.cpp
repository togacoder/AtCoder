#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, total = 0, ans = 0;
	cin >> n;
	vector<int> arr(n);
	
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
		total += arr[i];
	}
	if(total % 10 != 0) {
		ans = total;
	} else {
		for(int i = 0; i < n; i++) {
			if(((total - arr[i]) % 10 != 0)&&(ans < total - arr[i])) {
				ans = total - arr[i];
			}
		}
	}
	cout << ans << endl;

	return 0;
}
