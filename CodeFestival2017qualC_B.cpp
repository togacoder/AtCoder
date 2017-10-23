#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, all = 1, bad = 1;
	cin >> n;
	vector<int> arr(n);
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
		all *= 3;
		if(arr[i] % 2 == 0) bad *= 2;
	}
	cout << all - bad << endl;

	return 0;
}
