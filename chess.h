#include<string>


class Piece{
    private:
        bool white;
        bool taken;
        int x;
        int y;
    public:
        Piece(bool w, int _x, int _y){taken = false; white = w ;x = _x; y = _y;}
        bool move(int x, int y) = 0;
    
};
class Pawn : public Piece{
    public:
        Pawn(bool w, int _x, int _y) : Piece(bool w, int _x, int _y){}
        bool move(int x, int y);
};
class Rook : public Piece{
    public:
        Rook(bool w, int _x, int _y) : Piece(bool w, int _x, int _y){}
        bool move(int x, int y);
};
class Bishop : public Piece{
    public:
        Bishop(bool w, int _x, int _y) : Piece(bool w, int _x, int _y){}
        bool move(int x, int y);
};
class Knight : public Piece{
    public:
        Knight(bool w, int _x, int _y) : Piece(bool w, int _x, int _y){}
        bool move(int x, int y);
};
class Queen : public Piece{
    public:
        Queen(bool w, int _x, int _y) : Piece(bool w, int _x, int _y){}
        bool move(int x, int y);
};
class King : public Piece{
    public:
        King(bool w, int _x, int _y) : Piece(bool w, int _x, int _y){}
        bool move(int x, int y);
};

class Chess{
    void start(){
        Piece* set[2][16]; 
        for(int i = 0, i < 2, i++){
            for(int x = 0, x < 8, x++){
                int y = 1;
                if (i == 0){
                    y += 5
                }
                set[i][j] = Pawn(i,x,y)
            }
        }
        for (int i = 0; i < 2; i++){
            int y = 0;
            if (i == 0){
                y += 7
            }
            set[i][8]  = Rook(i,0,y);
            set[i][9]  = Knight(i,1,y);
            set[i][10] = Bishop(i,2,y);
            set[i][11] = King(i,3,y);
            set[i][12] = Queen(i,4,y);
            set[i][13] = Bishop(i,5,y);
            set[i][14] = Knight(i,6,y);
            set[i][15] = Rook(i,7,y);

        }
    };
    bool isOver();
};

