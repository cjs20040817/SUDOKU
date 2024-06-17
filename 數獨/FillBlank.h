#ifndef FILLBLANK_H
#define FILLBLANK_H
#include "Generate.h"
#include<vector>

class FillBlank{
private:
    vector<int > fill_board;
    int x,y,number;//x軸，y軸，填入的數字

public:
    FillBlank();//建構子
    FillBlank(int,int,int);//x軸，y軸，填入的數字
    void setX(int);
    void setY(int);
    void setN(int);
    int getX() const;
    int getY() const;
    int getN() const;

    void receive_board(vector <int >);//接收 Blank 已挖空的 board
    vector<int > fill();//連入座標和數字
    void get_board();//列印 board
    vector<int> return_board();//回傳 board
    
};

#endif
