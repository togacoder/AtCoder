#include <bits/stdc++.h>
using namespace std;
int main() {
	string a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;
	int num = 'A' - 'a';
	printf("%c%c%c\n", a[0] + num, b[0] + num, c[0] + num);

	return 0;
}
