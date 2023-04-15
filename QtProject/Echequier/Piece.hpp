
#ifndef PIECE_HPP
#define PIECE_HPP
#pragma once
#include <iostream>
using namespace std;

enum class Type {
    Roi,
    Cavalier,
    Tour
};

enum class Couleur {
    Blanc,
    Noir
};

class Piece
{

public:
    Piece() = default;
    Piece(int x, int y, Couleur couleur, Type type);
    //Piece(const Piece& p);
    virtual ~Piece();
    //Piece& operator=(const Piece& p);

    void move(int x, int y);
    int getX() const;
    int getY() const;
    Couleur getCouleur() const ;
    virtual bool mouvementValide( int x, int y) const;
    bool memePlace(const Piece& p) const;

    friend std::ostream& operator<< (std::ostream& os, const Piece& p);

protected:
    int x_;
    int y_;
    Type type_;
    Couleur couleur_;
};

#endif // PIECE_HPP
