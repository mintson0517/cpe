#include <iostream>

using namespace std;

int main() {

    int N;
    int Fibonacci[40] = {0, 1};
    int i;

    for(i = 2; i < 40; i++) {
        Fibonacci[i] = Fibonacci[i - 1] + Fibonacci[i - 2];
    }

    cin >> N;

    while(N--) {

        int num;
        bool flag = false;

        cin >> num;
        cout << num << " = ";

        for(i = 39; i >= 2; i--) {
            if(num >= Fibonacci[i]) {
                num = num - Fibonacci[i];
                flag = true;
                cout << "1";
            }
            else if(flag) {
                cout << "0";
            }
        }

        cout << " (fib)" << endl;
    }

    return 0;
}
