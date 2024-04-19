#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int N;
    while (cin >> N) {
        vector<int> coefficients(N + 1);
        
        for (int i = 0; i <= N; i++) {
            cin >> coefficients[i];
        }
        
        int x;
        cin >> x;
        
        int derivative = 0;
        for (int i = 0; i < N; i++) {
            derivative += coefficients[i] * (N - i) * pow(x, N - i - 1);
        }
        
        cout << derivative << endl;
    }
    return 0;
}