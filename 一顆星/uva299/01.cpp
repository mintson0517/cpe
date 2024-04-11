#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

int main() {
    int N, L;
    cin >> N;

    for(int j = 0; j < N; j++){
        cin >> L;
        
    vector<int> numbers(L);

    for (int i = 0; i < L; i++) {
        cin >> numbers[i];
    }

    int swaps = 0;
    for (int i = 0; i < L - 1; i++) {
        for (int j = 0; j < L - i - 1; j++) {
            if (numbers[j] > numbers[j + 1]) {
                swap(numbers[j], numbers[j + 1]);
                swaps++;
            }
        }
    }

    cout << "Optimal train swapping takes " << swaps << " swaps." << endl;
    }
    return 0;
}
