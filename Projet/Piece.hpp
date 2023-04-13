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

std::ostream& operator<< (std::ostream& os, const Piece& p) {
    os << "Piece : ";
    switch (p.type_) {
    case Type::Roi:
        os << "Roi";
        break;
    case Type::Cavalier:
        os << "Cavalier";
        break;
    case Type::Tour:
        os << "Tour";
        break;
    default:
        os << "Inconnu";
    }
    os << " ";
    switch (p.couleur_) {
    case Couleur::Blanc:
        os << "blanc";
        break;
    case Couleur::Noir:
        os << "noir";
        break;
    default:
        os << "inconnue";
    }
    os << " en position (" << p.x_ << ", " << p.y_ << ")";
    return os;
}
