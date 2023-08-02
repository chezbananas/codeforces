using namespace std;

#include <bits/stdc++.h>

int main() {
    int n, diff;
    cin >> n >> diff;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        int curr = arr[i];
        for (int j = i + 1; j < n; j++) {
            if (abs(curr - arr[j]) <= diff) {
                count += 2;
            }
        }
    }
    cout << count << endl;
    return 0;
}