using namespace std;
#include <iostream>

int main() {
	int num;
	cin >> num;
	int total = 0;
	for (int i = 0; i < num; i++) {
		int count = 0;	
		for (int j = 0; j < 3; j++) {
			int hi;
			cin >> hi;
			count += hi;		
		}
		if (count > 1) {
			total++;
		}
	}
	cout << total << endl;
}