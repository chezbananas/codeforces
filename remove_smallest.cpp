using namespace std;
#include <iostream>
#include <vector>
#include <bits/stdc++.h>

void game() {
	int n;
	cin >> n;
	cin.get();
	vector<int> arr;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		arr.push_back(num);
	}
	sort(arr.begin(), arr.end());
	for (int i = 1; i < n; i++) {
		if (arr[i] - arr[i - 1] > 1) {
			cout << "NO" << endl;
			return;
		}
	}
	cout << "YES" << endl;
}

int main() {
	int num;
	cin >> num;
	cin.get();
	for (int i = 0; i < num; i++) {
		game();
	}	
	return 0;
}
