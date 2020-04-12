#include <iostream>
#include <string>

using namespace std;

int main() {
    string num;
    cin >> num;
    for(int i= 0; i < num.length(); i++) {
        if(num[i] == '7') {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}
