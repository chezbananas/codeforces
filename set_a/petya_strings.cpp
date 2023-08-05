using namespace std;

#include <bits/stdc++.h>

int main() {
    string first, second;
    cin >> first >> second;
    string s1, s2 = "";
    for (char ch : first) {
        if (isupper(ch)) {
            ch = tolower(ch);
        }
        s1 += ch;
    }
    for (char ch : second) {
        if (isupper(ch)) {
            ch = tolower(ch);
        }
        s2 += ch;
    } 
    int ret = s1.compare(s2);
    cout << ret << endl;
    return 0;
}