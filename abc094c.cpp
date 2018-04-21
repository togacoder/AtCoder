#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n;
    vector<int> arr(n);
    vector<int> brr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        brr[i] = arr[i];
    }
    sort(brr.begin(), brr.end());
    m = brr[n / 2 - 1];
    for(int i = 0; i < n; i++)  {
        if(arr[i] <= m) {
            cout << brr[n / 2] << endl;
        } else {
            cout << brr[n / 2 - 1] << endl; 
        }
    }
    
    return 0;
}
