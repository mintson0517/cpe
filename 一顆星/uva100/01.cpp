#include <iostream>

using namespace std;

int main() {
    int a, b;

    while (cin >> a >> b) {
        int max_count = 0;
        
        for (int i = min(a, b); i <= max(a, b); i++) {
            int num = i;
            int count = 1;
            
            while (num != 1) {
                if (num % 2 == 1) {
                    num = 3 * num + 1;
                } else {
                    num = num / 2;
                }
                count++;
            }
            max_count = max(max_count, count);
        }
        cout << a << " " << b << " " << max_count << endl;
    }

    return 0;
}
