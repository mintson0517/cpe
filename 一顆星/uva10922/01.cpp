#include <iostream>
#include <string>
using namespace std;

int sumD(int num) {
    int sum = 0;
    string numStr = to_string(num);
    for (char D : numStr) {
        sum += D - '0';
    }
    return sum;
}

int main() {
    int N;
    while (cin >> N) {
        if (N == 0) break;
        if (N % 9 == 0) {
            int count = 1;
            while (sumD(N) % 9 == 0) {
                count++;
                N = sumD(N); 
            }
            cout << N << " is a multiple of 9 and has 9-degree " << count << "." << endl;
        } else {
            cout << N << " is not a multiple of 9." << endl;
        }
    }
    return 0;
}
