using namespace std;
#include <iostream>
#include <set>

int main() {
	int n1, n2, n3, n4;
	cin >> n1 >> n2 >> n3 >> n4;
	set<int> s;
	s.insert(n1);
	s.insert(n2);
	s.insert(n3);
	s.insert(n4);
	int cap = s.size();
	cout << 4 - cap << endl;
	return 0;
}
