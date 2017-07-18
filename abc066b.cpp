#include <bits/stdc++.h>
using namespace std;
int main() {
	string str, head;
	cin >> str;
	int ans = 0, len = str.length();

	for(int i = 0; i < len / 2 - 1; i++) {
		head.push_back(str[0]);
		str.erase(str.begin());

		int flag = 1;
		for(int j = 0; j < head.length(); j++) {
			if(head[j] != str[j]) {
				flag = 0;
				break;
			}
		}
		if(flag) ans = head.length();
	}

	cout << ans * 2 << endl;

	return 0;
}
