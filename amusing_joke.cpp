using namespace std;

#include <iostream>
#include <string>
#include <map>

int main() {
	string one, two, three;
	cin >> one >> two >> three;	
	map<char, int> d;
	for (char ch : one) {
		if (d.find(ch) == d.end()) {
			d.insert({ch, 0});
		}
		d[ch]++;
	}
	for (char ch : two) {
		if (d.find(ch) == d.end()) {
			d.insert({ch, 0});
		}
		d[ch]++;
	}
	for (char ch : three) {
		if (d.find(ch) == d.end()) {
			cout << "NO" << endl;
			return 0;
		}
		d[ch]--;
	}
	for (auto pair : d) {
		char ch = pair.first;
		if (d[ch]) {
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;
	return 0;
}
