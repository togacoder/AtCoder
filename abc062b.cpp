#include <bits/stdc++.h>
using namespace std;
int main() {
	int h, w;
	cin >> h >> w;
	vector < vector<char> > arr(h, vector<char>(w));
	for(int i = 0; i < h; i++) {
		for(int j = 0; j < w; j++) {
			cin >> arr[i][j];
		}
	}
	
	for(int i = 0; i < h + 2; i++) {
		for(int j = 0; j < w + 2; j++) {
			if(j == w + 1) {
				cout << "#" << endl;;
			} else if((j == 0)||(i == 0)||(i == h + 1)) {
				cout << "#";
			} else {
				cout << arr[i - 1][j - 1];
			}
		}
	}

	return 0;
}
