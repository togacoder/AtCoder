#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, x, m;
    cin >> n >> x;
    vector<int> arr(n + 1);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    arr[n] = x;
    sort(arr.begin(), arr.end());
    
    m = arr[1] - arr[0];
    for(int i = 0; i < n; i++) {
        if(arr[i + 1] - arr[i] < m) m = arr[i + 1] - arr[i];
    }
    
    int ans = 1;
    for(int i = m; 1 < m; i--) {
        bool f = 1;
        for(int j = 0; j < n; j++) {
            if((arr[j + 1] - arr[j]) % i != 0) {
                f = 0;
                break;
            }
        }
        if(f) {
            ans = i;
            break;
        }
    }
    cout << ans << endl;

    return 0;
}
