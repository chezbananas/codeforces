using namespace std;

#include <bits/stdc++.h>

int main() {
    string n;
    cin >> n;
    int count = 0;
    for (char ch : n) {
        if (ch == '4' || ch == '7') {
            count++;
        }
    }
    n = to_string(count);
    for (char ch: n) {
        if (ch != '4' && ch != '7') {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}