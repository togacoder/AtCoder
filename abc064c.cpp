#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	int color = 0, max = 0;
	vector<int> arr(8, 0);

	cin >> n;
	for(int i = 0; i < n; i++) {
		int num;
		cin >> num;
		
		num /= 400;
		if(num < 8) {
			arr[num] = 1;
		} else {
			max++;
		}
	}	
	for(int i = 0; i < 8; i++) color += arr[i];
	if(color == 0) {
		cout << "1 " << max << endl;
	} else {
		cout << color << " " << color + max << endl;
	}

	return 0;
}
