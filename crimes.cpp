using namespace std;
#include <iostream>
#include <string>
#include <set>
#include <vector>

int main() {
	int rows, cols;
	cin >> rows >> cols;
	cin.get();
	set<vector<int>> points;
	for (int r = 1; r <= rows; r++) {
		string line;
		getline(cin, line);
		for (int c = 1; c <= cols; c++) {
			if (line[c - 1] == '*') {
				vector<int> pt{r, c};
				points.insert(pt);
			}
		} 
		if (points.size() >= 3) {
			break;
		}
	}
	set<int> rSet, cSet;
	for (vector<int> point : points) {
		rSet.insert(point[0]);
		cSet.insert(point[1]);
	}
	for (int r : rSet) {
		for (int c : cSet) {
			vector<int> pt{r, c};
			if (points.find(pt) == points.end()) {
				cout << r << ' ' << c << endl;
				return 0;
			}
		}
	}
	return 0;
}
