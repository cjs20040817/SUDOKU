#include"FillBlank.h"

FillBlank::FillBlank(){
    x=y=number=0;
}//x,y,n都設初始值
FillBlank::FillBlank(int nX,int nY,int nNumber){
    setX(nX);
    setY(nY);
    setN(nNumber);
}
//x軸，y軸，填入的數字
void FillBlank::setX(int nX){
    x=nX;
}
void FillBlank::setY(int nY){
    y=nY;
}
void FillBlank::setN(int nNumber){
    number=nNumber;
}
int FillBlank::getX() const{
    return x;
}
int FillBlank::getY() const{
    return y;
}
int FillBlank::getN() const{
    return number;
}

void FillBlank::receive_board(vector <int > x){
    fill_board = x;
}

vector<int > FillBlank::fill(){
    if(getX() == 1){
        fill_board[getY()-1] = getN();

    }else if(getX() == 2){
        fill_board[getY()+8] = getN();

    }else if(getX() == 3){
        fill_board[getY()+17] = getN();

    }else if(getX() == 4){
        fill_board[getY()+26] = getN();

    }else if(getX() == 5){
        fill_board[getY()+35] = getN();

    }else if(getX() == 6){
        fill_board[getY()+44] = getN();

    }else if(getX() == 7){
        fill_board[getY()+53] = getN();

    }else if(getX() == 8){
        fill_board[getY()+62] = getN();

    }else if(getX() == 9){
        fill_board[getY()+71] = getN();

    }
    return fill_board;
}

void FillBlank::get_board(){
    for( int i=0 ;i < fill_board.size() ; i++ ){
        if(i == 27 || i == 54) cout<<"------+-------+------"<<endl;
        cout << fill_board[i] << ' ';
        if( i%9==2 || i %9==5) cout<<"| ";
        
        if((i+1) % 9 == 0){
            cout << endl;
       }
    }
    cout << endl;
}

vector<int> FillBlank::return_board(){
    return fill_board;
}
