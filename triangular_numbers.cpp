using namespace std;

#include <bits/stdc++.h>

int main() {
    int n;
    cin >> n;
    for (int i = 1; i < 32; i++) {
        int c = i * (i + 1) / 2;
        if (c == n) {
            cout << "YES" << endl;
            return 0;
        } else if (c > n) {
            break;
        }
    }
    cout << "NO" << endl;
    return 0;
}