using namespace std;

#include <bits/stdc++.h>

void playGame(int x, int n, int m) {
    while (n > 0 && x > 20) {
        n--;
        x = x / 2 + 10;
    }
    while (m && x > 0) {
        m--;
        x -= 10;
    }
    x > 0 ? cout << "NO" << endl : cout << "YES" << endl;
}

int main() {
    int cases;
    cin >> cases;
    for (int i = 0; i < cases; i++) {
        int x, n, m;
        cin >> x >> n >> m;
        playGame(x, n, m);
    }
    return 0;
}