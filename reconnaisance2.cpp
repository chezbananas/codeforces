using namespace std;

#include <bits/stdc++.h>

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        arr[i] = num;
    }
    int m = INT_MAX;
    int idx1, idx2 = 0;
    for (int i = 0; i < n - 1; i++) {
        int diff = abs(arr[i + 1] - arr[i]);
        if (diff < m) {
            m = diff;
            idx1 = i;
            idx2 = i + 1;
        }
    }
    int diff = abs(arr[n - 1] - arr[0]);
    if (diff < m) {
        m = diff;
        idx1 = n - 1;
        idx2 = 0;
    }
    cout << idx1 + 1 << " " << idx2 + 1 << endl;  // correction for 1-based indexing in solution
    return 0;
}