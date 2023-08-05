#include <bits/stdc++.h>
using namespace std;

void playGame(int x) {
    int count = 0;
    while (x >= 10) {
        count += x - x % 10;
        x = x / 10 + x % 10;
    }
    count += x;
    cout << count << endl;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        playGame(x);
    }
    return 0;
}