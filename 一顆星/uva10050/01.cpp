#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    while (N--) {
        int d, p, lost = 0;
        cin >> d >> p;

        vector<int> h(p);
        for (int i = 0; i < p; i++) {
            cin >> h[i];
        }

        for (int i = 1; i <= d; i++) {
            if ((i % 7 == 6) || (i % 7 == 0))
                continue;
            int flag = 0;
            for (int j = 0; j < p; j++) {
                if (i % h[j] == 0) {
                    flag = 1;
                    break;
                }
            }
            if (flag == 1) {
                lost++;
            }
        }
        cout << lost << endl;
    }
    return 0;
}
