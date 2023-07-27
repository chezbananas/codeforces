using namespace std;

#include <bits/stdc++.h>

int main() {
    string input;
    cin >> input;
    int size = input.size();
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (isupper(input[i])) {
            count++;
        }
        input[i] = tolower(input[i]);
    }
    if (count > size / 2) {
        for (int i = 0; i < size; i++) {
            input[i] = toupper(input[i]);
        }
    } 
    cout << input << endl;
}