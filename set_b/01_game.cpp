using namespace std;

#include <bits/stdc++.h>

void game(string s) {
    int idx = 0;
    int player = 0;
    while (idx < s.size() - 1 && s.size() > 1) {
        if (s[idx] != s[idx + 1]) {
            s = s.substr(0, idx) + s.substr(idx + 2);
            player = (player + 1) % 2;
            idx = -1; 
        }
        idx++;
    }
    (player == 1) ? cout << "DA" << endl : cout << "NET" << endl;
}

int main() {
    int n;
    cin >> n;
    vector<string> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (string s: arr) {
        game(s);
    }
    return 0;
}