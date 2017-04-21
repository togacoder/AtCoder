#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, flag = 0, keep = -1, count = 1;
	cin >> n;
	
	for(int i = 0; i < n; i++) {
		int input;
		cin >> input;
		if(i != 0) {
			if(flag == 0) {
				if(keep < input) {
					flag = 1;
				} else if(keep > input) {
					flag = -1;
				}
			} else if(flag == 1) {
				if(keep > input) {
					count++;
					flag = 0;
				}
			} else if(flag == -1) {
				if(keep < input) {
					count++;
					flag = 0;
				}
			}
		}
		keep = input;
	}
	cout << count << endl;

	return 0;
}
