#include<iostream>
using namespace std;

int main() {
    int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string day[] = {"Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday"};
    int test_cases, month, day_of_month, total_days;

    while (cin >> test_cases) {
        for (int i = 0; i < test_cases; i++) {
            int total_days = 0;
            cin >> month >> day_of_month;
            for (int j = 1; j < month; j++)
                total_days += days[j];
            total_days += day_of_month;
            cout << day[total_days % 7] << endl;
        }
    }
    return 0;
}
