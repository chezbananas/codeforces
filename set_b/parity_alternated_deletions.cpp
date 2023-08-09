#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> odds;
    vector<int> evens;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        if (num % 2 == 0) {
            evens.push_back(num);
        } else {
            odds.push_back(num);
        }
    }
    sort(evens.begin(), evens.end());
    sort(odds.begin(), odds.end());     
    int eS = evens.size();
    int oS = odds.size();
    bool even;
    if (abs(eS - oS) < 2) {
        cout << 0 << endl;
        return 0;
    }
    if (eS > oS) {
        even = true;
    } else { 
        even = false;
    }
    int diff = abs(eS - oS) - 1; 
    long long sum = 0;
    vector<int> arr;
    if (even) {
        arr = evens;    
    } else {
        arr = odds;
    }
    for (int i = 0; i < diff; i++) {
        sum += arr[i]; 
    }
    cout << sum << endl;
    return 0;
}