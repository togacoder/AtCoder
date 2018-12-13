#include <bits/stdc++.h>
using namespace std;
int main() {
    int d;
    cin >> d;
    cout << "Christmas";
    d = 25 - d;
    for(int i = 0; i < d; i++) {
        cout << " Eve";
    }
    cout << endl;

    return 0;
} 
