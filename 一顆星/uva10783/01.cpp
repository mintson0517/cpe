#include <iostream>

using namespace std;

int main(){
    int N, a, b;
    cin >> N;

    for(int i = 1; i <= N; i++){
        int sum = 0;
        cin >> a >> b;
        for(a; a <= b; a++){
            if(a % 2 == 1){
                sum += a;
            }
        }
        cout << "Case " << i << ": " << sum << endl;
    }
    return 0;
}