using namespace std;

#include <bits/stdc++.h>

int main() {
    int n;
    cin >> n;
    int parity = 1;
    long long count = 0;
    bool haveZero = false;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        if (num < 0) {
            parity *= -1;
            num *= -1;
        }
        count += abs(num - 1);
        if (num == 0) {
            haveZero = true;
        }
    }
    if (parity == -1 && !haveZero) {
        count += 2;
    }
    cout << count << endl;
}