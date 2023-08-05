using namespace std;

#include <bits/stdc++.h>

int main() {
    string s;
    getline(cin, s);
    char last = 'a';
    for (char ch : s) {
        if (isalpha(ch)) {
            last = tolower(ch);
        }
    }
    switch (last) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'y':
            cout << "YES" << endl;
            break;
        default:
            cout << "NO" << endl;
    }
    return 0;
}