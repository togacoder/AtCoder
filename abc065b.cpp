#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, ans = 0;
	cin >> n;
	vector<int> arr(n + 1, 0);
	for(int i = 1; i <= n; i++) {
		cin >> arr[i];
	}
	int key = 1;
	while(1) {
		if(arr[key]) {
			int x = key;
			key = arr[key];
			arr[x] = 0;
			ans++;
			if(key == 2) break;
		} else {
			ans = -1;
			break;
		}
	}
	cout << ans << endl;

	return 0;
}
