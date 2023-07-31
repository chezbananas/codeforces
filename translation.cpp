using namespace std;

#include <bits/stdc++.h>

int main() {
    string s, t;
    cin >> s >> t;
    if (s.size() != t.size()) {
        cout << "NO" << endl;
        return 0;
    }
    for (int i = 0; i < s.size(); i++) {
        int idx = s.size() - i - 1;
        if (s[i] != t[idx]) {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}