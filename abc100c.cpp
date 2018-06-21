#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, ans = 0; cin >> n;
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        while(1) {
            if(a % 2 == 0) {
                ans++;
                a /= 2;
            } else {
                break;
            }
        }
    }
    cout << ans << endl;

    return 0;
}
