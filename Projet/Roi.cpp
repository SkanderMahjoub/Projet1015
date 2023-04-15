#include "Roi.hpp"
#include "Piece.hpp"
#include <iostream>
#include <cassert>
using namespace std;

Roi::Roi(Couleur couleur):
	Piece(5, couleur == Couleur::Blanc ? 1 : 8, couleur, Type::Roi)
{}

bool Roi::mouvementValide(int x, int y) const
{
    // Vérifie si les mouvement du roi sont valide (même pour manger une pièce adverse).
    assert(x > 0 && x < 9 && y > 0 && y < 9);
	if ((x == this->x_ + 1 || x == this->x_ - 1 || x == this->x_) && (y == this->y_ + 1 || y == this->y_ - 1 || y == this->y_))
			return true;
	return false;
}
