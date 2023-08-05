using namespace std;

#include <iostream>
#include <algorithm>
int main() {
	int nFriends, bottles, volume, limes, slices, salt, req_ml, req_grams;
	cin >> nFriends >> bottles >> volume >> limes >> slices >> salt >> req_ml >> req_grams;
	int total_ml = bottles * volume;
	int total_limes = limes * slices;
	int ml_per_person = total_ml / nFriends;
	int slices_per_person = total_limes / nFriends;
	int salt_per_person = salt / nFriends;
	int drink_servings = ml_per_person / req_ml;
	int salt_servings = salt_per_person / req_grams
	cout << min({drink_servings, salt_servings, slices_per_person}) << endl;
	return 0;
}
