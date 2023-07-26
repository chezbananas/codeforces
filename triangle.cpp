using namespace std;
#include <iostream>
#include <vector>
#include <bits/stdc++.h>

int main() {
    vector<int> sides;
    for (int i = 0; i < 4; i++) {
        string input; 
        cin >> input;
        sides.push_back(stoi(input));
    }
    sort(sides.begin(), sides.end());   
    bool degen = false;
    for (int i = 0; i < 4; i++) {
        vector<int> curr;
        for (int j = 0; j < 4; j++) {
            if (j != i) {
                curr.push_back(sides[j]);
            }
        }
        if (curr[0] + curr[1] > curr[2]) {
            cout << "TRIANGLE" << endl;
            return 0;
        } else if (curr[0] + curr[1] == curr[2]) {
            degen = true;
        }
    }
    if (degen) {
        cout << "SEGMENT" << endl;
    } else {
        cout << "IMPOSSIBLE" << endl;
    }
}