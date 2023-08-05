using namespace std;

#include <iostream>

int main() {
	int num; 
	cin >> num;
	cin.get();	
	int center;
	int points = 0;
	int half = num / 2;
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			int temp;
			cin >> temp;
			if (i == j || num - 1 - i == j || i == half || j == half) {
				points += temp;
			}
	  		if (i == half && j == half) {
				center = temp;	
			}		
		}
		cin.get();
	}
	cout << points << endl;
	return 0;
}
