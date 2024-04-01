#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string a, b;

    while (getline(cin, a) && getline(cin, b)) {
        int countA[26] = {0}; 
        int countB[26] = {0}; 

        for (char c : a) {
                countA[tolower(c) - 'a']++;
        }

        for (char c : b) {
                countB[tolower(c) - 'a']++;
        }

        for (int i = 0; i < 26; ++i) {
            int minCount = min(countA[i], countB[i]);
            for (int j = 0; j < minCount; ++j) {
                char letter = 'a' + i;
                cout << letter;
            }
        }
        cout << endl;
    }
    return 0;
}
