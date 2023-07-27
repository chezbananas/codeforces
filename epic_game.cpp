using namespace std;
#include <bits/stdc++.h>

int main() {
	int a, b, n;
	cin >> a >> b >> n;
	int i = 0;
	vector<int> players(2);
	players[0] = a;
	players[1] = b;
	while (1) {
		int g = gcd(players[i], n);
		n -= g;
		i = (i + 1) % 2;
		if (n < 0) {
			break;
		}	}
	cout << i << endl;
	return 0;
}
