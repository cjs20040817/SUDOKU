#ifndef BLANK_H
#define BLANK_H
#include "Generate.h"
#include"Answer.h"
#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

class Blank {
private:
    vector<int > revise_board;
    int Hollow_quantity;//存要挖多少空格

public:
    void receive_board(vector <int >);//接收 Ganerate 的 board
    void hole_board(int);//挖空格
    vector<int> return_board();//傳送已挖好的 board
};

#endif
