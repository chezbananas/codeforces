using namespace std;

#include <iostream>

int main() {
	int num;
	cin >> num;
	if (num % 1 != 0) {
		cout << -1 << endl;
		return 0;
	} else {
		for (int i = num / 2 + 1; i <= num; i++) {
			cout << i << ' ';
		}
		for (int i = 1; i <= num / 2; i++) {
			cout << i << ' ';
		}
	}
	return 0;
}
