using namespace std;
#include <bits/stdc++.h>

void play(int n, int m) {
    int mi = INT_MAX;
    int ma = -1; 
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        if (num < mi) {
            mi = num;
        }
        if (num > ma) {
            ma = num;
        }
    }   
    if (ma - m > mi + m) {
        cout << -1 << endl;
        return;
    }
    cout << mi + m << endl;
    return;  
}

int main() {
    int q; 
    cin >> q;
    for (int i = 0; i < q; i++) {
        int n, m;
        cin >> n >> m;
        play(n, m);
    }
}