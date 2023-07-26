using namespace std;
#include <iostream>

int main() {
	int n, num, currScore;
	int top, low;
	cin >> n;
	cin.get();
	cin >> num;
	top = num;
	low = num;
	int count = 0;
	for (int i = 1; i < n; i++) {
		cin >> num;
		if (num < low) {
			count++;
			low = num;
		} else if (num > top) {
			count++;
			top = num;
		}
	}
	cout << count << endl;
	return 0;
}	
