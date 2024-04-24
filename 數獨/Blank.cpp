#include"Blank.h"
#include "Generate.h"

void Blank::receive_board(vector <int > x) {
    revise_board = x;
}

void Blank::hole_board(int x) {

    Hollow_quantity = x;
    int no_n = 0;
    for (int i = 0; i < Hollow_quantity; i++) {
        revise_board[rand() % 81] = 0;//隨機取空格
    }
    while (Hollow_quantity != no_n) {//確定空格有沒有到要挖的數量
        no_n = 0;
        for (int i = 0; i < 81; i++) {
            if (revise_board[i] == 0) no_n++;//數空格
        }
        for (int i = 0; i < Hollow_quantity - no_n; i++) {
            revise_board[rand() % 81] = 0;
        }
    }
}

vector<int> Blank::return_board() {
    return revise_board;
}
