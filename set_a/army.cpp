using namespace std;

#include <bits/stdc++.h>

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n - 1; i++) {
        int num;
        cin >> num;
        arr[i] = (num);
    }
    int r1, r2;
    cin >> r1 >> r2;
    int count = 0;
    for (int i = r1 - 1; i < r2 - 1; i++) {
        count += arr[i];
    }
    cout << count << endl;
    return 0;
}