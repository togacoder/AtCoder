#include <bits/stdc++.h>
using namespace std;
int main() {
	string str;
	int n = 0;
	cin >> str;
	for(int i = 0; i < 3; i++) if(str[i] == '1') n++;
	cout << n << endl;
	return 0;
}
