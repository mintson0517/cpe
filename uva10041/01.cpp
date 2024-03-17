#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int testcase; 
    cin >> testcase;

    vector<int> d(testcase, 0);

    for (int i = 0; i < testcase; ++i) {
        int r; 
        cin >> r;

        vector<int> s(r); 
        for (int j = 0; j < r; ++j) {
            cin >> s[j];
        }

        sort(s.begin(), s.end());

        int mid;
        if (r % 2 == 0) { 
            mid = (s[r / 2 - 1] + s[r / 2]) / 2;
        } else { 
            mid = s[r / 2];
        }

        for (int j = 0; j < r; ++j) {
            d[i] += abs(s[j] - mid);
        }
    }

    for (int i = 0; i < testcase; ++i) {
        cout << d[i] << endl;
    }

    return 0;
}
