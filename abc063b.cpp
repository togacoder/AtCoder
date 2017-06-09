#include <bits/stdc++.h>
using namespace std;
int main() {
	vector<int> arr(26, 0);
	string s;
	cin >> s;
	
	for(int i = 0; i < s.length(); i++) {
		arr[s[i] - 'a']++;
	}
	
	int flag = 0;
	for(int i = 0; i < 26; i++) {
		if(1 < arr[i]) {
			flag = 1;
		}
	}
	if(flag) {
		cout << "no" << endl;
	} else {
		cout << "yes" << endl;
	}

	return 0;
}
