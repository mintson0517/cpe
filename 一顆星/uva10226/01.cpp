#include <iostream>
#include <string>
#include <map>
#include <iomanip>

using namespace std;

int main() {
    int n;
    bool flag = false;
    string name;

    cin >> n >> ws;//whitespace

    while (n--) {
        if (flag) {
            cout << "\n";
        }
        flag = true;

        double sum = 0;
        map<string, int> mp;

        while (getline(cin, name) && !name.empty()) {
            mp[name]++;
            sum++;
        }

        for (const auto& i : mp) {
            cout << i.first << " " << fixed << setprecision(4) << (i.second / sum) * 100 << "\n";
        }
    }

    return 0;
}
