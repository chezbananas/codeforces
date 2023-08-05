using namespace std;
#include <iostream>
#include <set>

int main() {
	string str;
	cin >> str;
	set<char> s;
	for (char ch : str) {
		s.insert(ch);
	}
	if (s.size() % 2 == 0) {
		cout << "CHAT WITH HER!" << endl;
	} else {
		cout << "IGNORE HIM!" << endl;
	}
	return 0;
}