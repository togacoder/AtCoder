#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector <int> arr(n);
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end());
	
	int num = arr[0], ans = 1;
	for(int i = 1; i < n; i++) {
		if(num != arr[i]) {
			ans++;
			num = arr[i];
		}
	}
	cout << ans << endl;

	return 0;
}
