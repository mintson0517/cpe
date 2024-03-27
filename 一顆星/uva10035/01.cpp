#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string a, b;

    while (cin >> a >> b) {
        if (a == "0" && b == "0") return 0;

        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());

        int carry = 0;
        int carry_count = 0;

        for (int i = 0; i < max(a.size(), b.size()); ++i) {
            int sum = carry;
            if (i < a.size()) sum += a[i] - '0';
            if (i < b.size()) sum += b[i] - '0';

            if (sum >= 10) {
                carry = 1;
                ++carry_count;
            } else {
                carry = 0;
            }
        }

        if (carry_count == 0) {
            cout << "No carry operation." << endl;
        } else if (carry_count == 1) {
            cout << "1 carry operation." << endl;
        } else {
            cout << carry_count << " carry operations." << endl;
        }
    }

    return 0;
}
