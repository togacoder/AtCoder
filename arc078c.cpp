#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector<int> arr(n);
	long long int head = 0, tail = 0, ans;
	
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
		tail += arr[i];
	}
	for(int i = 0; i < n - 1; i++) {
		head += arr[i];
		tail -= arr[i];
		if(i == 0) ans = abs(head - tail);
		if(abs(head - tail) < ans) ans = abs(head - tail);
	}

	cout << ans << endl;

	return 0;
}
