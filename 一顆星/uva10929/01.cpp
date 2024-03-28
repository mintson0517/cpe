#include <iostream>
#include <string>
using namespace std;

int main() {
    string num;
    while (cin >> num) {
        if (num == "0") break;

        int sum = 0;
        int digit;
        int position = 1;

        for (int i = num.size() - 1; i >= 0; i--) {
            digit = num[i] - '0';
            if (position % 2 == 0) {
                sum += digit;
            } else {
                sum -= digit;
            }
            position++;
        }

        if (sum % 11 == 0) {
            cout << num << " is a multiple of 11." << endl;
        } else {
            cout << num << " is not a multiple of 11." << endl;
        }
    }
    return 0;
}
