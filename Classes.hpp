#pragma once
#include <iostream>
#include <vector>

using namespace std;

class Tile{
public:
//constructeur d'une case prend une position x et y
    Tile();
    Tile(int posX, int posY){
        posX_ = posX;
        posY_ = posY;
    }
    string color_; //c'est tu grave si je met public? plus facile pour accéder après
    int posX_;
    int posY_;
};


class Board: public Tile{
public:
//je sais pas si on devrait initialiser avec des nullptr dans le constructeur, et ensuite placer les pièces dans la 
//classe Game.
    Board();
    Board(){
        for(int i = 0 ; i < row_ ; i++){
            for(int j = 0 ; j < collumns_ ; j++){
                Tile tile(i, j);
                Tile* tilePtr = &tile;
                board_[i][j] = tilePtr;
            }
        }
    }

    void setTileColor(Board board){
        for(int i = 0 ; i < board.row_ ; i++){
            for(int j = 0 ; j < board.collumns_ ; j++){
                if((i + j) % 2 == 0){
                    board_[i][j]->color_ == "W";
                }else{
                    board_[i][j]->color_ == "B";
                }
            }
        }
    }
    string getTileColor(int row, int collumn){
        return board_[row][collumn]->color_;
    }
    //vérifie qu'une case est vide/occupée par une pièce
    bool isAvailable();

protected:
    vector<vector<Tile*>> board_;
    
private:   
    int row_ = 8;
    int collumns_ = 8;
    
};

//je sais pas si c'est nécessaire, mais ca serait pour l'affichage
class DisplayBoard : public Board{
public:
    DisplayBoard() = default;

private:
    int row_ = 8;
    int collumns_ = 8;

};


class Game : public Board, public Piece, public Player{
public:
    Game();
    void setPlayer1(string name, string color){
        player1_ = Player(name, color);
    }
    void setPlayer2(string name, string color){
        player2_ = Player(name, color);
    }

private:
    Player player1_;
    Player player2_;
};

class Player{
//pas mis de setter, le nom est mis direct dans le constructeur.
public:
    Player(string name, string color){
        name_ = name;
        color_ = color;
    }

private:
    string name_;
    string color_;
};

class Piece{
public:
    Piece();
    virtual void Move(Tile start, Tile finish);
    virtual bool canMove(Tile start, Tile finish);

private:
    int posX_;
    int posY_;
    string color_;

};

class King : public Piece{
public:
virtual void Move(Tile start, Tile finish)override; 
virtual bool canMove(Tile start, Tile finish)override;

protected:
string name_ = "K";
};

class Queen : public Piece{
public:
virtual void Move(Tile start, Tile finish)override; 
virtual bool canMove(Tile start, Tile finish)override;

protected:
string name_ = "Q";
};

class Bishop : public Piece{
public:
virtual void Move(Tile start, Tile finish)override; 
virtual bool canMove(Tile start, Tile finish)override;

protected:
string name_ = "B;"
};

class Knight : public Piece{
public:
virtual void Move(Tile start, Tile finish)override; 
virtual bool canMove(Tile start, Tile finish)override;

protected:
string name_ = "Kn";
};

class Rook : public Piece{
public:
virtual void Move(Tile start, Tile finish)override; 
virtual bool canMove(Tile start, Tile finish)override;

protected:
string name_ = "R";
};
 
class Pawn : public Piece{
public:
virtual void Move(Tile start, Tile finish)override; 
virtual bool canMove(Tile start, Tile finish)override;

protected:
string name_ = "P";
};
