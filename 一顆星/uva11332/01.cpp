#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
  ll num;
  while(cin >> num && num != 0){
    ll sum = 0;
    
    while(true){
      sum = 0;
      while(num != 0){
        sum += num % 10;
        num /= 10;
      }
      if(sum < 10) break;
      num = sum;
    }
    cout << sum << endl;
  }
  return 0;
}
