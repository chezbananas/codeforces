using namespace std;
#include <bits/stdc++.h>

int main() {
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		arr[num - 1] = i + 1;
	}
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " " << endl;
	}
	return 0;
}
