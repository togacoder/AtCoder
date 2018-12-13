#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k, l = INT_MAX;
    cin >> n >> k;
    vector<int> h(n);
    for(int i = 0; i < n; i++) {
        cin >> h[i];
    }
    sort(h.begin(), h.end());
    
    for(int i = 0; i <= n - k;i++) {
        l = min(l, h[i + k - 1] - h[i]);
    }
    cout << l << endl;

    return 0;
}
