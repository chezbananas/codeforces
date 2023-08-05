#include <bits/stdc++.h>

using namespace std;

void playGame(int x, int k) {
    int count = x / k * k;
    int extras = min(k / 2, x - count);
    count += extras;
    cout << count << endl;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x, k;
        cin >> x >> k;
        playGame(x, k);
    }
    return 0;
}