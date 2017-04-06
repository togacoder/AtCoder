#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, m;
	int arr[50][50], brr[50][50];
	cin >> n >> m;
	for(int i = 0; i < n; i++) {
		cin >> arr[i][0] >> arr[i][1];
	}
	for(int i = 0; i < m; i++) {
		cin >> brr[i][0] >> brr[i][1]; 
	}
	
	int min = INT_MAX;
	int num = 0;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			int keep = abs(arr[i][0] - brr[j][0]) + abs(arr[i][1] - brr[j][1]);
			if(keep < min) {
				min = keep;
				num = j;
			}
		}
		cout << num + 1 << endl;
		min = INT_MAX;
		num = 0;
	}

	return 0;
}
