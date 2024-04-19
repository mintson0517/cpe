#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N, rev_N;
    bool flag1, flag2;
    int i;

    while (cin >> N) {
        cout << N << " ";

        flag1 = true;
        flag2 = true;
        rev_N = 0;

        for (i = 2; i <= sqrt((double)N); i++) {
            if (N % i == 0) {
                flag1 = false;
                break;
            }
        }

        if (flag1) {
            int temp = N;

            while (temp > 0) {
                rev_N = rev_N * 10 + temp % 10;
                temp = temp / 10;
            }

            if (rev_N == N) {
                flag2 = false;
            } else {
                for (i = 2; i <= sqrt((double)rev_N); i++) {
                    if (rev_N % i == 0) {
                        flag2 = false;
                        break;
                    }
                }
            }
        }

        if (flag1 && flag2) {
            cout << "is emirp." << endl;
        } else if (flag1) {
            cout << "is prime." << endl;
        } else {
            cout << "is not prime." << endl;
        }
    }

    return 0;
}
