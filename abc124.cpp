#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    int n;
    cin >> s;
    n = s.length();
    int ans0 = 0, ans1 = 0;

    for(int i = 0; i < n; i++) {
        if(i % 2 == 0) {
            if(s[i] == '1') {
                ans0++;
            } else {
                ans1++;
            }
        } else {
            if(s[i] == '1') {
                ans1++;
            } else {
                ans0++;
            }
        }
    }
    if(ans0 < ans1) {
        cout << ans0 << endl;
    } else {
        cout << ans1 << endl;
    }

    return 0;
}
