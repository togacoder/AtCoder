#include <bits/stdc++.h>
using namespace std;
int main() {
	int arr[3], count = 0;;
	cin >> arr[0] >> arr[1] >> arr[2];

	sort(arr, arr + 3);
	count += (arr[2] - arr[0]) / 2;
	count += (arr[2] - arr[1]) / 2;
	if((arr[2] - arr[1]) % 2 == 0) {
		arr[1] = arr[2];
	} else {
		arr[1] = arr[2] - 1;
	}

	if((arr[2] - arr[0]) % 2 == 0) {
		arr[0] = arr[2];
	} else {
		arr[0] = arr[2] - 1;
	}
	
	if((arr[2] == arr[1])&&(arr[2] - 1 == arr[0])||(arr[2] == arr[0])&&(arr[2] - 1 == arr[1])) {
		count += 2;
	} else if((arr[2] - 1 == arr[1])&&(arr[2] - 1 == arr[0])) {
		count++;
	}

	cout << count << endl;
	return 0;
}
