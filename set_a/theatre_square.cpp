using namespace std;

#include <iostream>
#include <vector>
int main() {
    unsigned long long n, m, a;
    cin >> n >> m >> a;
    unsigned long long na;
    unsigned long long ma;
    if (n % a == 0) {
        na = n / a;
    } else {
        na = n / a + 1;
    }
    if (m % a == 0) {
        ma = m / a;
    } else {
        ma = m / a + 1;
    }
    cout << na * ma << endl;
}