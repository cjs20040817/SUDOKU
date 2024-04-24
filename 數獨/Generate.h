#ifndef GENERATE_H
#define GENERATE_H

#define SIZE 9
#include<vector>
#include<iostream>
using namespace std;

class Generate {
public:
    Generate();
    void generator(); //亂數法產生新棋盤 (初始化時建構子就會呼叫一次)
    vector<int > get_board(); //輸出棋盤至vector變數
    bool check_rep(vector<int>, int, int); //偵測填入數字是否重複、符合規則，不符合會回傳false值
    bool board_put(vector<int>&); //填入數字函式，嘗試失敗超過1000次會回傳false值


private:
    int new_board[SIZE][SIZE]; //棋盤
    int i, j, k, l; //迴圈用變數

};

#endif
