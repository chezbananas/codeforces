using namespace std;

#include <iostream>

int main() {
    int num;
    cin >> num;
    string str;
    for (int i = 0; i < num; i++) {
        cin >> str;
        if (str.size() > 10) {
            cout << str[0] << to_string(str.size() - 2) << str[str.size() - 1] << endl;
        } else {
            cout << str << endl;
        }
    }
}