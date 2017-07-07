#include <bits/stdc++.h>
using namespace std;
int main() {
	int array[3];
	cin >> array[0] >> array[1] >> array[2];
	sort(array, array + 3);
	cout << array[0] + array[1] << endl;

	return 0;
}
