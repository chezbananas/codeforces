using namespace std;

#include <bits/stdc++.h>

int main() {
	int n;
	cin >> n;
	int mincap, curcap = 0;
	for (int i = 0; i < n; i++) {
		int exit, enter;
		cin >> exit >> enter;
		curcap -= exit;
		curcap += enter;
		if (curcap > mincap) {
			mincap = curcap;
		}
	}
	cout << mincap << endl;
}

