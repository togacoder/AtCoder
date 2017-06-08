#include <bits/stdc++.h>
using namespace std;
int main() {
	int arr[12] = {1, 3, 1, 2, 1, 2, 1, 1, 2, 1, 2, 1};
	int x, y;
	cin >> x >> y;
	
	if(arr[x - 1] == arr[y - 1]) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}
	

	return 0;
}
