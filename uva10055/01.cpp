#include <iostream>
#include <stdlib.h>

using namespace std;
using ll = long long;
int main(){
    ll a;
    ll b;
    while(cin >> a >> b){
        cout << abs(a - b) << endl;
    }
    return 0;
}
