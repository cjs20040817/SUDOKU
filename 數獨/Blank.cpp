#include"Blank.h"
#include "Generate.h"

void Blank::receive_board(vector <int > x) {
    revise_board = x;// 接收一個整數向量作為參數，用來初始化或更新遊戲板
}

void Blank::hole_board(int x) {

    Hollow_quantity = x;// 設定挖掘的空洞數量為 x
    int no_n = 0;
    for (int i = 0; i < Hollow_quantity; i++) {
        revise_board[rand() % 81] = 0;//隨機取空格
    }
    while (Hollow_quantity != no_n) {//確定空格有沒有到要挖的數量
        no_n = 0;
        for (int i = 0; i < 81; i++) {
            if (revise_board[i] == 0) no_n++;// 計算目前已挖掘的空洞數量
        }
        for (int i = 0; i < Hollow_quantity - no_n; i++) {
            revise_board[rand() % 81] = 0; // 再次隨機挖掘一個格子，直到達到預定的空洞數量
        }
    }
}
// 回傳遊戲板的當前狀態，以整數向量的形式返回
vector<int> Blank::return_board() {
    return revise_board;
}
