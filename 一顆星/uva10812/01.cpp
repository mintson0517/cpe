#include <iostream>
#include <algorithm>

using ll = long long;
using namespace std;

int main(){
  ll N, s, d, a, b;
  cin >> N;
  for(ll i = 0; i < N; i++){
    cin >> s >> d;
    a = ((s + d) / 2 );
    b = ((s - d) / 2);
    if((s + d) % 2 == 1 || (s - d) % 2 ==1 || a < 0 || b < 0){
      cout << "impossible" << endl;
    } else{
      cout << a << ' ' << b << endl;
    }
  }
  return 0;
}