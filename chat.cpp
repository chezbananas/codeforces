using namespace std;
#include <iostream>

int main() {
	int currMembers = 0;
	string input;
	getline(cin, input);
	int count = 0;
	while (!cin.eof()) {
		if (input[0] == '+') {
			currMembers++;
		} else if (input[0] == '-') {
			currMembers--;
		} else {
			int idx = input.find(':');
			count += (currMembers * (input.size() - idx - 1));
		}
		getline(cin, input);
	}
	cout << count << endl;
}
