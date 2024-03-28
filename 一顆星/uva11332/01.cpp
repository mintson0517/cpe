#include <iostream>

using namespace std;

int main() {
    long long num;
    while (cin >> num) {
        if (num == 0) break;
        
        long long sum = 0; 

        while (true) {
            sum = 0; 
            while (num != 0) {
                sum += num % 10; 
                num /= 10;     
            }
            if (sum < 10) break;
            num = sum; 
        }

        cout << sum << endl;
    }
    return 0;
}
