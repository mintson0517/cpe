#include <bits/stdc++.h>

using namespace std;

int main(){
    long long S,D;
    while(cin >> S >> D){
        while(D != 0){
            D -= S;
            if(D <= 0){
                cout << S << endl;
                break;
            }
            else{
                S++;
            }
        }
    }
    return 0;
}
