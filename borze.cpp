using namespace std;

#include <bits/stdc++.h>

int main() {
    string s;
    cin >> s;
    int idx = 0;
    string output, curr = "";
    while (idx < s.size()) {
        curr += s[idx];
        if (curr == ".") {
            output += '0';
            curr = "";
        } else if (curr == "-.") {
            output += '1';
            curr = "";
        } else if (curr == "--") {
            output += '2';
            curr = "";
        }
        idx++;
    }
    cout << output << endl;
    return 0;
}