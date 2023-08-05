using namespace std;
#include <iostream>
int main () {
	int size;
	cin >> size;	int minIdx, maxIdx;
	int minVal = INT_MAX;
	int maxVal = INT_MIN;
	for (int i = 0; i < size; i++) {
		int num;
		cin >> num;
		if (num <= minVal) {
			minIdx = i;
			minVal = num;
		} 
	   	if (num > maxVal) {
			maxIdx = i;
			maxVal = num;
		}	
	}
	int minSteps = (size - 1) - minIdx;
	int steps = minSteps + maxIdx;
	if (minIdx < maxIdx) {
		steps--;
	}
	cout << steps << endl;
	return 0;
}
