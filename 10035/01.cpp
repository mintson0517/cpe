#include <bits/stdc++.h>

using namespace std;

int main() {
    string a, b;
    while(cin >> a >> b && !(a == "0" && b == "0")) {
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        int carry = 0, ans = 0;
        for(int i = 0; i < max(a.size(), b.size()); i++) {
            int sum = carry;
            if(i < a.size()) {
                sum += a[i] - '0';
            }
            if(i < b.size()) {
                sum += b[i] - '0'; 
            }
            carry = (sum >= 10);
            ans += carry;
        }
        if(ans == 0 || ans == 1) {
            cout << (ans == 0 ? "No" : "1") << " carry operation." << endl; 
            //(condition) ? (value_if_true) : (value_if_false)
        } else {
            cout << ans << " carry operations." << endl;
        }
    }
    return 0;
}