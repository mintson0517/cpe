#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b;
    while (cin >> a >> b) {
        if (a == 0 && b == 0) {
            break;
        }

        int count = 0;
        for (int i = sqrt(a); i * i <= b; i++) {
            count++;
        }

        cout << count << endl;
    }
    return 0;
}
