#include <bits/stdc++.h>

using namespace std;

int main(){
  int T;
  cin >> T;
  for(int i = 0; i < T; i++){
    int N, M, Q, row, column;
    cin >> N >> M >> Q;
    cout << N << " " << M << " " << Q << endl;
    
    string square[N];
    for(int j = 0; j < N; j++){
      cin >> square[j];
    }
    
    
    for(int j = 0; j < Q; j++){
      cin >> row >> column;
      
      char center = square[row][column];
      
      int l_half = 0;
      int l_height = min(row, N - row - 1);
      int l_width = min(column, M - column - 1);
      int half = min(l_height, l_width);
      
      bool isSquare;
      for(int k = 1; k <= half; k++){
        isSquare = true;
        for(int m = row - k; m <= row + k; m++){
          for(int n = column - k; n <= column + k; n++){
            if(m < 0 || m >= N || n < 0 || n >= M || square[m][n] != center){
              isSquare = false;
              break;
            }
          }
          if(!isSquare)
            break;
        }
        if(isSquare){
          l_half++;
        }else{
          break;
        }
      }
      cout << l_half*2+1 << endl;
    }
  }
  return 0;
}
