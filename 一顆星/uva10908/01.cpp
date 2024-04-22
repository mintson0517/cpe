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
    for(int i = 0; i < N; i++){
      cin >> square[i];
    }
    
    for(int j = 0; j < Q; j++){
      cin >> row >> column;
      
      int l_half = 0;
      
      char center = square[row][column];
      
      int l_height = (row < (N - row - 1)) ? row : N - row - 1;
      int l_width = (column < (M - column - 1)) ? column : M - column - 1;
      int half = (l_height < l_width ) ? l_height : l_width;
      
      bool isSquare;
      for(int k = 1; k <= half; k++){
        isSquare = true;
        for(int m = row - k; m <= row + k; m++){
          for(int n = column - k; n <= column + k; n++){
            if(square[m][n] != center){
              isSquare = false;
              break;
            }
          }
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
