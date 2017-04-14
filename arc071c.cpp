#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int arr[26];
	int keep[26];
	for(int i = 0; i < 26; i++) {
		arr[i] = INT_MAX / 2;
	}
	for(int i = 0 ; i < n; i++) {
		for(int j = 0; j < 26; j++) {
			keep[j] = 0;
		}
		string str;
		cin >> str;
		for(int j = 0; j < str.length(); j++) {
			keep[str[j] - 'a']++;
		}
		for(int j = 0; j < 26; j++) {
			if(keep[j] < arr[j]) {
				arr[j] = keep[j];
			}
		}
	}
	
	for(int i = 0; i < 26; i++) {
		for(int j = 0; j < arr[i]; j++) {
			printf("%c", i + 'a'); 
		}
	}
	cout << endl;

	return 0;
}
