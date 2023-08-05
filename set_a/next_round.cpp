using namespace std;
#include <iostream>

int main() {
	int n, k;
	cin >> n >> k;
	cin.get();
	int num;
	int count = 0;
	for (int i = 0; i < k; i++) {
		cin >> num;
		if (num <= 0) {
			cout << count << endl;
			return 0;
		}
		count++;
	}
	int save = num;
	cin >> num;
	while (count < n && num == save) {
		count++;
		cin >> num;
	}	
	cout << count << endl;
	return 0;
}
