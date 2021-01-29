#include<string>
#include<iostream>

class Piece{
    private:
        bool white;
        bool taken;
        int x;
        int y;
        char symbol;
    public:
        Piece(bool w, int _x, int _y, char s);
        virtual bool move(int x, int y) = 0;
    
};
class Pawn : public Piece{
    public:
        Pawn(bool w, int _x, int _y) : Piece(w, _x, _y, 'p'){}
        bool move(int x, int y);
};
class Rook : public Piece{
    public:
        Rook(bool w, int _x, int _y) : Piece(w, _x, _y, 'R'){}
        bool move(int x, int y);
};
class Bishop : public Piece{
    public:
        Bishop(bool w, int _x, int _y) : Piece(w, _x, _y, 'B'){}
        bool move(int x, int y);
};
class Knight : public Piece{
    public:
        Knight(bool w, int _x, int _y) : Piece(w, _x, _y, 'N'){}
        bool move(int x, int y);
};
class Queen : public Piece{
    public:
        Queen(bool w, int _x, int _y) : Piece(w, _x, _y, 'Q'){}
        bool move(int x, int y);
};
class King : public Piece{
    public:
        King(bool w, int _x, int _y) : Piece(w, _x, _y, 'K'){}
        bool move(int x, int y);
};

class Chess{
    private:
        Piece* set[2][16];
        char board[8][8];
    public:
        void start();
        void printBoard();
        bool isOver();
};

Piece::Piece(bool w, int _x, int _y, char s){
    taken = false; 
    white = w ;x = _x; 
    y = _y;
    symbol = s;
}
void Chess::start(){
    for (int i = 0; i < 8; i++){
        for (int ii = 0; ii < 8; ii++){
            board[i][ii] = ' ';
        }
    }
    
    for(int i = 0; i < 2; i++){
        for(int x = 0; x < 8; x++){
            int y = 1;
            if (i == 0){
                y += 5;
            }
            set[i][x] = new Pawn(i,x,y);
        }
    }
    for (int i = 0; i < 2; i++){
        int y = 0;
        if (i == 0){
            y += 7;
        }
        set[i][8]  = new Rook(i,0,y);
        set[i][10]  = new Knight(i,1,y);
        set[i][12] = new Bishop(i,2,y);
        set[i][15] = new King(i,3,y);
        set[i][14] = new Queen(i,4,y);
        set[i][13] = new Bishop(i,5,y);
        set[i][11] = new Knight(i,6,y);
        set[i][9] = new Rook(i,7,y);
    }
};
void printBoard(){
    std::cout << "-----------------"

}
bool Chess::isOver(){
}