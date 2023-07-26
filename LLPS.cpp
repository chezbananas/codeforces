using namespace std;
#include <iostream>

int main() {
	string s;
	cin >> s;
	char max = ' ';
	string result = "";	
	for (char ch : s) {
		if (ch > max) {
			max = ch;
			result = ch;
		} else if (ch == max) {
			result += ch;
		}
	}
	cout << result << endl;
	return 0;
}	

	
	
