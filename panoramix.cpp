using namespace std;

#include <bits/stdc++.h>

int main() { // incredibly gross solution
    int n, m;
    cin >> n >> m;
    if (n == 47) {
        cout << "NO" << endl;
        return 0;
    }
    vector<int> primes{2, 3, 5, 7, 11, 13, 17,  19 , 23, 29, 31, 37, 41, 43, 47};
    auto spot = find(primes.begin(), primes.end(), n);
    int idx = spot - primes.begin();
    primes[idx + 1] == m ? cout << "YES" : cout << "NO";
    cout << endl; 
}