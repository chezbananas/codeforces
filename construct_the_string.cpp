using namespace std;

#include <bits/stdc++.h>

void playGame(int n, int a, int b) {
    string result = "";
    string validChars = "";
    for (int i = 0; i < b; i++) {
        validChars += 'a' + i;
    }
    int j, idx = 00;
    for (int i = 0; i < n; i++) {
        if (j >= a) {
            j = 0;
            idx = 0;
        }   
        result += validChars[idx];
        j++;
        if (idx < b - 1) {
            idx++;
        }
    }
    cout << result << endl;
}

int main() {
    int num;
    cin >> num;
    for (int i = 0; i < num; i++) {
        int n, a, b;
        cin >> n >> a >> b;
        playGame(n, a, b);
    }
    return 0;
}