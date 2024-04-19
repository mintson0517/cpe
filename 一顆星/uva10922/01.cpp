#include <iostream>
#include <cstring>
using namespace std;

int degree(char *str) {
    int i;
    int multiple, D = 0;

    if (strlen(str) == 1 && str[0] == '9') {
        return 1;
    }

    while (strlen(str) >= 2) {
        multiple = 0;

        for (i = 0; i < strlen(str); i++) {
            multiple = multiple + str[i] - '0';
        }

        if (multiple % 9 == 0) {
            D++;
        }

        sprintf(str, "%d", multiple);
    }

    return D;
}

int main() {
    char N[1001] = {0};

    while (scanf("%s", N)) {
        if (N[0] == '0' && strlen(N) == 1) {
            break;
        } else {
            cout << N << " ";

            int D = degree(N);

            if (D) {
                cout << "is a multiple of 9 and has 9-degree " << D << ".";
            } else {
                cout << "is not a multiple of 9.";
            }

            cout << endl;
        }

        memset(N, 0, sizeof(N));
    }

    return 0;
}
