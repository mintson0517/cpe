#include <iostream>
#include <string>

using namespace std;

int main() {
    string str[101];
    int row = 0;
    int max_length = 0;

    while (getline(cin, str[row])) {
        if (str[row].length() > max_length) {
            max_length = str[row].length();
        }
        row++;
    }

    for (int i = 0; i < max_length; i++) {
        for (int j = row - 1; j >= 0; j--) {
            if (i >= str[j].length()) {
                cout << " ";
            } else {
                cout << str[j][i];
            }
        }
        cout << endl;
    }
    return 0;
}
