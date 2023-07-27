using namespace std;

#include <bits/stdc++.h>

int main() {
    int walruses, chips;
    cin >> walruses >> chips;
    int curr = 1;
    while (chips >= curr) {
        if (chips > walruses) {
            curr = 1;
        }
        chips -= curr;
        curr++;
    }
    cout << chips << endl;
    return 0;
}