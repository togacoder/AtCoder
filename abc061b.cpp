#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, m;
	cin >> n >> m;
	vector<int> num(n, 0);
	for(int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		num[a - 1]++;
		num[b - 1]++;
	}
	
	for(int i = 0; i < n; i++) {
		cout << num[i] << endl;
	}
	    

	return 0;
}
