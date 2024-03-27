#include <iostream>
#include <cstdlib>

using namespace std;
using ll = long long;

int main(){
    ll a;
    ll b;
    while(cin >> a >> b){
        //絶対値(abs)を使用するためcstdlibをインクルード
        cout << abs(a - b) << endl;
    }
    return 0;
}