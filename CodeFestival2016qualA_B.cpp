#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, count = 0;
	cin >> n;
	vector <int> arr(n + 1);
	for(int i = 1; i < n + 1; i++) {
		cin >> arr[i];
	}
	for(int i = 1; i < n + 1; i++) {
		if(i == arr[arr[i]]) {
			count++;
		}
	}
	cout << count / 2 << endl;

	return 0;
}
