#include <iostream>
#include <string>
using namespace std;
int find_mine(string[], int, int, int, int);

int main(){
    int col, row;
    int index = 1;

    while (cin >> col >> row){
        // end of input
        if (col == 0 && row == 0){
            break;
        }

        string game[col]; 
        char mine_num[col][row];

        for (int i = 0; i < col; i++){
            cin >> game[i];
        }

        // find the number of adjacent mines 
        for (int i = 0; i < col; i++){
            for (int j = 0; j < row; j++){
                if (game[i][j] != '*'){
                    mine_num[i][j] = '0' + find_mine(game, col, row, i, j);
                } else {
                    mine_num[i][j] = '*';
                }
            }
        }

        // output
        if (index != 1){
            cout << endl;
        }
        cout << "Field #" << index << ":" << endl;
        for (int i = 0; i < col; i++){
            for (int j = 0; j < row; j++){
                cout << mine_num[i][j];
            }
            cout << endl;
        }
        index++;
    }
    return 0;
}

int find_mine(string game[], int col, int row, int col_index, int row_index){
    int count_mine = 0;
    for (int x = col_index-1; x <= col_index+1; x++){
        if (x >= 0 && x < col){
            for (int y = row_index-1; y <= row_index+1; y++){
                if (y >= 0 && y < row){
                    if (game[x][y] == '*'){
                        count_mine++;
                    }
                }
            }
        }
    }
    return count_mine;
}