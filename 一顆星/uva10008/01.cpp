#include <iostream>
#include <map>
#include <string>
#include <cctype>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    cin.ignore(); 

    map<char, int> total_counts; 

    for (int i = 0; i < N; ++i) {
        string line;
        getline(cin, line); 

        map<char, int> mp;
        for (char ch : line) {
            if (isalpha(ch)) { 
                mp[toupper(ch)]++;
            }
        }

        for (const auto& p : mp) {
            total_counts[p.first] += p.second;
        }
    }

    vector<pair<char, int>> sorted(total_counts.begin(), total_counts.end());
    sort(sorted.begin(), sorted.end(), [](const auto& a, const auto& b) {
        return a.second > b.second;
    });

    for (const auto& p : sorted) {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}
