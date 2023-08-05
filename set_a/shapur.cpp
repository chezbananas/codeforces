using namespace std;

#include <bits/stdc++.h>

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    string res = "";
    for (int i = 0; i < s1.size(); i++) {
        s1[i] == s2[i] ? res += '0' : res += '1';
    }
    cout << res << endl;
}