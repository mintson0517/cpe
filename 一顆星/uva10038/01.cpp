#include <iostream>
#include <vector>
#include <cmath> // 絶対値の計算に必要

using namespace std;

int main() {
    int totalcase;

    while(cin >> totalcase) {
        // 入力された数列を格納する vector
        vector<int> s(totalcase);

        // 数列の各要素を読み込む
        for(int i = 0; i < totalcase; i++) {
            cin >> s[i];
        }

        // 差の絶対値を格納する vector
        vector<int> differences(totalcase);

        // 差の絶対値を計算
        for(int i = 1; i < totalcase; i++) {
            differences[abs(s[i] - s[i - 1])]++;
        }

        // 差の絶対値が1からn-1までの整数であることを確認
        bool isJolly = true;
        for(int i = 1; i < totalcase; i++) {
            if(differences[i] != 1) {
                isJolly = false;
                break;
            }
        }

        // 結果を出力
        if(isJolly) {
            cout << "Jolly" << endl;
        } else {
            cout << "Not jolly" << endl;
        }
    }

    return 0;
}
