#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b){
  if(b == 0){
    return a;
  }else{
    return gcd(b, a % b);
  }
}

int main(){
  int N, i, j;
  while(cin >> N && N != 0){
    int sum = 0;
    
    for(i = 1; i < N; i++){
      for(int j = i + 1; j <= N; j++){ 
        sum += gcd(i, j);
      }
    }
    cout << sum << endl;
  }
  return 0;
}
