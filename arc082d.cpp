#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, ans;
	cin >> n;
	vector<int> arr(n, 0);
	for(int i = 0; i < n; i++) {
		int num;
		cin >> num;
		if(i + 1 == num) {
			arr[i]++;
		}
	}
	for(int i = 0; i < n - 1; i++) {
		if((arr[i] == 1)&&(arr[i + 1] == 1)) {
			ans++;
			arr[i + 1] = 0;
		} else if((arr[i] == 1)&&(arr[i + 1] == 0)) {
			ans++;
		}
	}
	if(arr[n - 1] == 1) {
		ans++;
	}

	cout << ans << endl;

	return 0;
}
