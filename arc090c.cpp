#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, max = 0;
	cin >> n;
	vector< vector<int> > arr (2, vector<int>(n));
	for(int i = 0; i < n; i++) cin >> arr[0][i];
	for(int i = 0; i < n; i++) cin >> arr[1][i];

	for(int i = 0; i < n; i++) {
		int count = 0;
		for(int j = 0; j < n; j++) {
			if(i == j) {
				count += arr[0][j] + arr[1][j];
			} else if(j < i) {
				count += arr[0][j];
			} else if(i < j) {
				count += arr[1][j];
			}
		}
		if(max < count) max = count;
	}
	cout << max << endl;

	return 0;
}
