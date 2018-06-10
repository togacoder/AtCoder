#include <bits/stdc++.h>
using namespace std;
int main() {
    int x, ans = 0;
    cin >> x;
    for(int b = 1; b <= sqrt(x); b++) {
        for(int p = 2; p < 10; p++) {
            int num = pow(b, p);
            if((num <= x)&&(ans <= num)) ans = num;
        }
    }
    cout << ans << endl;

    return 0;
}
