using namespace std;

#include <bits/stdc++.h>

int main() {
    int n;
    cin >> n;
    if ((n < 20 && n > 10) || n == 21) {
        cout << "4" << endl;
    } else if (n == 20) {
        cout << "15" << endl;
    } else {
        cout << "0" << endl;
    }
    return 0;
}