#include "Generate.h"
#include "Blank.h"
#include <iostream>
#include <vector>
using namespace std;

int main() {
    Generate NewBoard; // 產生棋盤物件
    Blank blank; // 產生挖空物件
    FillBlank fillblank; //產生填空物件
    Answer answer; //產生答案物件

   blank.receive_board(NewBoard.get_board()); // 將棋盤物件產生的棋盤複製到挖空物件裡
  

    int n, x, y, number;
  cout << "請輸入想要挖多少空格(1~81)？";//
    cin >> n; // 輸入數字要挖多少空格
    while (n < 1 || n > 81) {
        cout << "請重新輸入...(1~81)";
        cin >> n;
    }

    while (answer.comparison()) { // 判斷有有完成挖空
        cin >> x >> y >> number;
        fillblank.setX(x);
        fillblank.setY(y);
        fillblank.setN(number);
        answer.receive_revise_board(fillblank.fill()); // 將未完成填空的棋盤傳到答案進行是否正確
        answer.get_board(); // 列印棋盤
    }

    return 0;
}
