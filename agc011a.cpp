#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, c, k;
	cin >> n >> c >> k;
	vector <int> t(n);
	for(int i = 0; i < n; i ++) cin >> t[i];
	sort(t.begin(), t.end());

	int ans = 0, count = 0, min = t[0];
	for(int i = 0; i < n; i++) {
		if((count < c) && (t[i] <= min + k)) {
			count++;
		} else {
			count = 1;
			min = t[i];
			ans++;
		}
	}
	ans++;
	cout << ans << endl;


	return 0;
}
