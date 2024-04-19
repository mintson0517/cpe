#include<iostream>

using namespace std;
int main(){

    int coke;
    int sum;
    int empty;

    while(cin >> coke){

        sum = coke;
        empty = coke;

        while(empty >= 3){
            sum = sum + (empty / 3);
            empty = (empty / 3) + (empty % 3);
        }

        cout << ( sum + empty / 2 ) << endl;
    }

    return 0;
}