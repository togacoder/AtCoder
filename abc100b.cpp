#include <bits/stdc++.h>
using namespace std;
int main() {
    int d, n;
    cin >> d >> n;
    if(n != 100) {
        if(d == 0) {
            cout << n << endl;
        } else if(d == 1) {
            cout << n * 100 << endl;
        } else {
            cout << n * 10000 << endl;
        }
    } else {
        if(d == 0) {
            cout << 101 << endl;
        } else if(d == 1) {
            cout << 100 * 101 << endl;
        } else {
            cout << 10000 * 101 << endl;
        }
    }

    return 0;
}
