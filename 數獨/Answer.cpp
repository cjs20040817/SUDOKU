#include"Answer.h"

void Answer::receive_original_board(vector <int > x){
    original_board = x;
}

void Answer::receive_revise_board(vector <int > x){
    revise_board = x;
}

bool Answer::comparison(){
    int x = 0;
    for(int i = 0 ; i < 81 ; i++){
        original_board[i] != revise_board[i] ? x++: x+0; //計算有多少錯誤
    }
    x != 0 ? cout<<"還有 "<< x <<" 個錯誤\n請輸入要改的位置跟數字"<<endl : cout<<"正確"<<endl;
    if(x == 0) get_board();
    return original_board == revise_board ? false : true ;
}

void Answer::get_board(){
    for( int i=0 ;i < revise_board.size() ; i++ ){
        if(i == 27 || i == 54) cout<<"------+-------+------"<<endl;
        cout << revise_board[i] << ' ';
        if( i%9==2 || i %9==5) cout<<"| ";
        if((i+1) % 9 == 0){
            cout << endl;
       }
    }
    cout << endl;
}
