#include <bits/stdc++.h>
using namespace std;
int main() {
	int h, w;
	cin >> h >> w;
	long long int n;
	cin >> n;
	vector<int> arr(n);
	vector< vector<int> > v(h, vector<int> (w));
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	
	int num = 1;
	for(int i = 0; i < h; i++) {
		if(i % 2) {
			for(int j = w - 1; 0 <= j; j--) {
				v[i][j] = num;
				arr[num - 1]--;
				if(arr[num - 1] == 0) num++;
			}
		} else {
			for(int j = 0; j < w; j++) {
				v[i][j] = num;
				arr[num - 1]--;
				if(arr[num - 1] == 0) num++;
			}
		}
	}

	for(int i = 0; i < h; i++) {
		for(int j = 0; j < w; j++) {
			cout << v[i][j];
			if(j != w - 1) cout << " ";
		}
		cout << endl;
	}

	return 0;
}
