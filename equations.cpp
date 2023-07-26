using namespace std;
#include <iostream>
#include <cmath> 
		
int main() {
	int n, m;
	cin >> n >> m;
	int count = 0;
	for (int a = 0; a < 1000; a++) {
		for (int b = 0; b < 1000; b++) {
			if (pow(a, 2) + b == n && a + pow(b, 2) == m) {
				count++;
			}
		}
	}
	cout << count << endl;
	return 0;	
}
