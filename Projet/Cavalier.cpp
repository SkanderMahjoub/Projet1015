#include "Cavalier.hpp"
#include "Piece.hpp"
#include <iostream>
#include <cassert>
using namespace std;

Cavalier::Cavalier(Couleur couleur){
	Piece cavalierDroit(7, couleur == Couleur::Blanc ? 1 : 8, couleur, Type::Cavalier);
	Piece cavalierGauche(2, couleur == Couleur::Blanc ? 1 : 8, couleur, Type::Cavalier);
}

bool Cavalier::mouvementValide(int x, int y) const
{
	// Vérifie si les mouvement du roi sont valide (même pour manger une pièce adverse).
    assert(x > 0 && x < 9 && y > 0 && y < 9);
    if ((this->x_ + 2 == x && this->y_ + 1 == y || this->x_ + 1 == x && this->y_ + 2 == y || this->x_ - 2 == x && this->y_ - 1 == y || this->x_ - 1 == x && this->y_ - 2 == y || this->x_ + 2 == x && this->y_ - 1 == y || this->x_ - 2 == x && this->y_ + 1 == y || this->x_ + 1 == x && this->y_ - 2 == y || this->x_ - 1 == x && this->y_ + 2 == y))
		return true;
	return false;
}
