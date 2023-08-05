using namespace std;

#include <bits/stdc++.h>

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        vector<int> arr(4);
        cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
        map<int, int> d;
        int special = 0;
        bool reallySpecial = false;
        for (int num : arr) {
            if (!d.count(num)) {
                d.insert({num, 0});
            } else {
                if (special && special != num) {
                    reallySpecial = true; // double paired
                }
                special = num;
            }
        }
        int notSpecial = 0;
        if (!reallySpecial) {
            for (int num : arr) {
                if (num != special) {
                    notSpecial += num;
                }
            }   
        }
        int v = arr[0] * arr[1] + arr[2] * arr[3];
        float s = sqrt(v);
        int toInt = int(s);
        if (toInt == s && (notSpecial == special || reallySpecial)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
} 