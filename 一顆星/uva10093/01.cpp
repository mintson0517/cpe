#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

map<char, int> generate() {
    map<char, int> num;
    int index = 0;

    for (char i = '0'; i <= '9'; ++i) {
        num[i] = index++;
    }

    for (char i = 'A'; i <= 'Z'; ++i) {
        num[i] = index++;
    }

    for (char i = 'a'; i <= 'z'; ++i) {
        num[i] = index++;
    }

    return num;
}

int solve(const string& s, const map<char, int>& num) {
    int maxNum = 0;
    int sumS = 0;

    for (char c : s) {
        if (num.find(c) != num.end()) {
            maxNum = max(maxNum, num.at(c));
            sumS += num.at(c);
        }
    }

    maxNum += 1;
    if (maxNum <= 1) return 2;

    while (maxNum <= 62) {
        if (sumS % (maxNum - 1) == 0) {
            return maxNum;
        }
        ++maxNum;
    }

    return -1; 
}

int main() {
    map<char, int> num = generate();
    string s;

    while (getline(cin, s)) {
        s.erase(remove(s.begin(), s.end(), ' '), s.end());

        int result = solve(s, num);
        if (result != -1) {
            cout << result << endl;
        } else {
            cout << "such number is impossible!" << endl;
        }
    }

    return 0;
}
