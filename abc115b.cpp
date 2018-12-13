#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, p, ans = 0, l = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> p;
        ans += p;
        l = max(l, p);
    }
    ans -= l / 2;
    cout << ans << endl;

    return 0;
}
