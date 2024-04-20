#include <iostream>
using namespace std;

int main() {
    int num;
    while (cin >> num) {
        if (num == 0) break;

        int count = 0, temp = 0;
        int a[32] = {0};

        while (num != 0) {
            a[count] = num % 2;
            if (a[count] == 1) temp++;
            num /= 2;
            count++;
        }
        cout << "The parity of ";

        for (int i = count - 1; i >= 0; i--) {
            cout << a[i];
        }
        cout << " is " << temp << " (mod 2)." << endl;
    }
    return 0;
}
