#include <bits/stdc++.h>
using namespace std;
long long int m(long long int, long long int, long long int);
int main() {
	long long int h, w;
	long long int ans;
	cin >> h >> w;
	if(h % 3 == 0 || w % 3 == 0) {
		ans = 0;
	} else {
		ans = min(h, w);
		for(int i = 1; i < h; i++) {
			ans = min(ans, m(h, w, i));
		}
		for(int i = 1; i < w; i++) {
			ans = min(ans, m(w, h, i));
		}
	}
	cout << ans << endl;

	return 0;
}

long long int m(long long int h, long long int w, long long int i) {
	long long int a[3];
	a[0] = w * i;
	a[1] = (h - i) * (w / 2);
	a[2] = (h - i) * (w - (w / 2));
	sort(a, a + 3);

	return a[2] - a[0];
}
