using namespace std;

#include <iostream>

int main  () {
    string s, t;
    cin >> s >> t;
    char sRow = s[1];
    char sCol = s[0];
    char tRow = t[1];
    char tCol = t[0];
    int rowDistance = abs(sRow - tRow);
    int colDistance = abs(sCol - tCol);
    cout << max(rowDistance, colDistance) << endl;
    while (sRow != tRow || sCol != tCol) {
        if (sCol > tCol) {
            cout << 'L';
            sCol--;
        }
        if (sCol < tCol) {
            cout << 'R';
            sCol++;
        }
        if (sRow > tRow) {
            cout << 'D';
            sRow--;
        }
        if (sRow < tRow) {
            cout << 'U';
            sRow++;
        }
        cout << endl;
    }
    return 0;
}