#ifndef ANSWER_H
#define ANSWER_H
#include "Generate.h"

class Answer{
private:
    vector<int > original_board;//存 Ganerate 的 board
    vector<int > revise_board;//存 FillBlank 的 board
    
public:
    void receive_original_board(vector <int >);//接收 Ganerate 的 board
    void receive_revise_board(vector <int >);//接收 FillBlank 的 board
    bool comparison();//比較 判斷是否正確、找錯誤、計算還有多少錯誤
    void get_board();//列印挖空的陣列
};

#endif
