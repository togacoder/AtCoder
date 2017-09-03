#include <bits/stdc++.h>
#define MAX 100001
using namespace std;
int main() {
	int n, ans = 0, m = 0, count = 0;
	cin >> n;
	vector<int> arr(MAX, 0);
	for(int i = 0; i < n; i++) {
		int num;
		cin >> num; 
		if(num != 0) arr[num - 1]++;
		arr[num]++;
		if(num != 100000) arr[num + 1]++;
	}
	
	for(int i = 0; i < MAX; i++) {
		if(ans < arr[i]) {
			ans = arr[i];
		}
	}
		
	cout << ans << endl;

	return 0;
}
